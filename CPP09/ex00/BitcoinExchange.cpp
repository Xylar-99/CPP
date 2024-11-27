

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



BitcoinExchange::BitcoinExchange(char *FileName)
{

//  check  write in file or not
    _file.open(FileName);
    if(!_file)
        throw(std::runtime_error("Error : " + std::string(strerror(errno))));
}



void ParseVAlue(std::string number)
{
    size_t _find = number.find_first_not_of("0123456789 ");
    size_t _rfind = number.find_last_not_of("0123456789 ");

    if(_find != number.npos && (_find != _rfind || number[_find] != '.')) throw(std::logic_error("Error: not a positive number."));

    float value = std::atof(number.c_str());

    if((int)value < 0 || (int)value > 1000) throw(std::logic_error("Error: too large a number."));

}



void ParseKey(std::string key)
{
    struct tm date ;

    date.tm_hour = 15;
    date.tm_min = 0;    
    date.tm_sec = 0;

    int flag = !strptime(key.c_str(), "%Y-%m-%d", &date) * 10;
    time_t bitime = mktime(&date);
    flag += (bitime > time(0) || bitime < START) * 10;

    std::string err = "Error: bad input => ";
    if(flag)
        throw(std::logic_error(err + key));
        
}



void BitcoinExchange::_CheckLIne(std::string line)
{


    size_t _find = line.find('|');

    if(_find == line.npos || _find != line.rfind('|'))
        throw(std::logic_error("Error : Not Find Pip"));
  
    // parse  key (date)
    ParseKey(line.substr(0 , _find));

    // parse value (0 > 1000)
    ParseVAlue(line.substr(_find + 1 , line.length()));

}



void BitcoinExchange::parse()
{


    std::string save;

    while(std::getline(_file , save ))
    {
        try
        {
        _CheckLIne(save);
        std::cout << save << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}


