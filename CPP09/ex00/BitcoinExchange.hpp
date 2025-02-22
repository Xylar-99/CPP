#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <math.h>
#include <string>
#include <stdexcept>
#include <limits>
#include <sstream>
#include <locale>
#include <map>

class   BitcoinExchange
{
public:
    std::map<time_t , float> _data;
    std::ifstream _input;
    std::ifstream _database;

private:
    time_t _date;
    float _value;

public: 
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange & operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

public:
    void Throw_exeption(bool expr , const char *);
    void CheckValue(std::string &value);
    void CheckDate(std::string &date);
    void CheckLine(std::string &buff , std::string &value , std::string &date);

public:
    void bitcOpenFile(const char *ff);
    void bitcParsefile();
    void database();
    float find(time_t date);

};


#endif
