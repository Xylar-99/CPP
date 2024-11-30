

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

BitcoinExchange::~BitcoinExchange()
{
    data.clear();
}



BitcoinExchange::BitcoinExchange(char *FileName)
{

//  check  write in file or not
    _file.open(FileName);
    if(!_file)
        throw(std::runtime_error("Error : " + std::string(strerror(errno))));
}



float ParseVAlue(std::string number , int flag)
{
    size_t _find = number.find_first_not_of("0123456789 ");
    size_t _rfind = number.find_last_not_of("0123456789 ");

    if(_find != number.npos && (_find != _rfind || number[_find] != '.')) throw(std::logic_error("Error: not a positive number."));

    float value = std::atof(number.c_str());

    if(((int)value < 0 || (int)value > 1000) && flag) throw(std::logic_error("Error: too large a number."));


    return (value);
}



time_t ParseKey(std::string key)
{
    setenv("TZ", "UTC", 1);
    tzset();
    struct tm date ;

    date.tm_hour = 15;
    date.tm_min = 0;    
    date.tm_sec = 0;

    int flag = !strptime(key.c_str(), "%Y-%m-%d", &date) * 10;


    time_t bitime = mktime(&date);
    gmtime(&bitime);
    flag += (bitime > time(0) || bitime < START) * 10;

    std::string err = "Error: bad input => ";
    if(flag)
        throw(std::logic_error(err + key));
    
    return (bitime);
}



void BitcoinExchange::_CheckLIne(std::string line , time_t &key , float &value , int flag)
{
    size_t _find = line.find('|');

    if(_find == line.npos || _find != line.rfind('|'))
        throw(std::logic_error("Error : Not Find Pip"));
    key = ParseKey(line.substr(0 , _find) );
    value = ParseVAlue(line.substr(_find + 1 , line.length()) , flag);

}



int BitcoinExchange::findvalue()
{
    std::map<time_t , float >::iterator  it = data.begin();

    while(it != data.end())
    {
        std::cout <<  "key = " << it->first << "   value =  " << (it->second) << std::endl;
        it++;
    }

    return 0;
}


void BitcoinExchange::parse()
{
    std::string save;
    time_t key;
    float value;

    while(std::getline(_file , save ))
    {
        try
        {
        _CheckLIne(save  , key , value , 1 );
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    BitcoinExchange::findvalue();

}


void BitcoinExchange::_storToMap()
{
    std::string save;
    time_t key;
    float value;
    std::ifstream fileCsv;

    fileCsv.open("input.csv");

    while(std::getline(fileCsv , save ))
    {
        try
        {
        _CheckLIne(save  , key , value , 0 );
        data[key] = value;
        }
        catch(const std::exception& e)
        {
        }
    }

    this->findvalue();
}
