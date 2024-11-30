


#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
#include <sstream>
#include <string>
#include <cstdlib>
#include<bits/stdc++.h> 

#define START 1230984000

typedef struct s_data
{
    int dot;
    int pip;
    int tiri;
    int index;
}t_data;


class   BitcoinExchange
{
private:
    std::ifstream _file;
    std::map<time_t, float > data;

public: 
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange & operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

public:
    BitcoinExchange(char *str);
    void _storToMap();
    void parse();
    void _CheckLIne(std::string line , time_t &key , float &value , int flag);
    int findvalue();
};

time_t ParseKey(std::string key);
float ParseVAlue(std::string number , int flag);    



#endif
