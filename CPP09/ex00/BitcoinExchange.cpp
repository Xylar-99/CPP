#include "BitcoinExchange.hpp"
#include <ctime>


BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    (void)obj;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::Throw_exeption(bool ex , const char *err)
{
    std::string msg_err = "btc : ";
    msg_err += std::string(err);
    if(ex)
        throw(std::runtime_error(msg_err));
}

void BitcoinExchange::bitcOpenFile(const char *f)
{
    _database.open("database.csv");
    Throw_exeption(_database.fail() , "database is not open ");

    _input.open(f);
    Throw_exeption(_input.fail() , "input is not open ");
}


int strtrim(std::string &str)
{
    size_t fpos = str.find_first_not_of(" ");
    size_t lpos = str.find_last_not_of(" ");
    if(fpos == str.npos )
        fpos = 0;

    str = str.substr(fpos , lpos - fpos + 1);
    return 1;
}


float BitcoinExchange::find(time_t date)
{
    std::map<time_t , float>::iterator it = _data.begin();

    while(it != _data.end())
    {
        if(it->first > date)
            break;
        it++;
    }
    Throw_exeption(it == _data.begin() && it->first != date , "date is not exist ");
    return (--it)->second;
}


void BitcoinExchange::CheckValue(std::string &value)
{
    float n;

    size_t f = value.find_first_not_of("0123456789");
    size_t l = value.find_last_not_of("0123456789");
    Throw_exeption((f != l && f != value.npos) , "Error  value is not valid");

    n = std::strtof(value.c_str() , NULL);
    Throw_exeption(n < 0 || n > 1000 , "Error is too large");

    _value = n;
}

void BitcoinExchange::CheckDate(std::string &date)
{
    tm timeinfo;
    memset(&timeinfo, 0, sizeof(std::tm));
    Throw_exeption(!isdigit(date[date.size() - 1]) , "invalid1  DATE");
    date.push_back('-');
    Throw_exeption(!strptime(date.c_str(), "%Y-%m-%d-", &timeinfo) , "invalid  DATE");
    _date = mktime(&timeinfo);

}

void BitcoinExchange::CheckLine(std::string &buff , std::string &date , std::string &value)
{
    int pip;

    pip = buff.find_first_of('|');
    // Parsing date value 
    {
        date  = buff.substr(0 , pip); strtrim(date);
        Throw_exeption(!date.size() , "Invalid date format.");
        CheckDate(date);
        date.erase(date.size() - 1 , 1);
    }

    // Parsing numeric value 
    {
        value = buff.substr(pip + 1 , buff.size()); strtrim(value);
        Throw_exeption(!value.size() , "Invalid value format.");
        CheckValue(value);
    }
}


void BitcoinExchange::database()
{
    std::string date  , value;
    std::string buff;

    while(std::getline(_database , buff ))
    {
        try 
        {
            CheckLine(buff , date , value); 
            _data[_date] = _value;
        }
        catch(const std::exception& e) {}
    };
}

void BitcoinExchange::bitcParsefile()
{
    database();
    std::string date  , value;
    std::string buff;
    while(std::getline(_input , buff ))
    {
        try
        {
            CheckLine(buff , date , value);
            std::cout << date << " => " << value << " = " << _value * find(_date) << std::endl;
        }
        catch(const std::exception& e) 
        {
            std::cerr << e.what() << std::endl;
        }
    };
}
