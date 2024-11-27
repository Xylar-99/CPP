


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
    std::map<std::string, std::string> data;
    t_data _dataParse;

public: 
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange & operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

public:
    BitcoinExchange(char *str);
    void parse();
    int ft_count(std::string &line);
    void _CheckLIne(std::string line);

};

void ParseKey(std::string key);
void ParseVAlue(std::string number);



#endif
