

#include "ScalarConverter.hpp"

#include<bits/stdc++.h> 
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <limits>
ScalarConverter::ScalarConverter(){}


ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &obj)
{

    (void)obj;

    return *this;
}

ScalarConverter::~ScalarConverter(){}


std::string PrintfString(std::string str)
{
   return str;
}


void printaa(double value , int vprint , int flag)
{


     if(std::isnan(value) || (!flag && std::isinf(value)))
     {
        std::cout << "IMPOSSIBLE" << std::endl;
        return ;
     }


    if(flag)
        std::cout << ((std::isinf(value) && value > 0)? std::numeric_limits<int>::max() : vprint) << std::endl; 
    else
        std::cout << (value >= 32 && value <= 126 ? std::string(1 , (char)vprint) : std::string("Non displayable")) << std::endl;

}


void PrintCasting(double &value , std::string str)
{
    int frac = 1;
    if(str.find(".") != str.npos && str[str.find(".") + 1])
        frac = str.size() - (str.find(".") + 1) + (str[str.size() - 1] == 'f') * (-1);

    frac = (!frac) ? 1 : frac;

    char ch = static_cast<char>(value);
    int integer = static_cast<int>(value);
    float flot = static_cast<float>(value);
    double dauble = static_cast<double>(value);

    std::cout <<  "char   : ";
    printaa(value , ch , 0);
    std::cout << "int    : "; 
    printaa(value , integer , 1);
    std::cout << std::fixed << std::setprecision(frac);
    std::cout << "float  : " << flot << "f" << std::endl;
    std::cout << "double : " << dauble   << std::endl;

}


int Infinity(std::string str )
{
    int flag = 0;
    size_t index = (str.find("inf") == str.npos) ? ((str.find("nan") != str.npos && ++flag) ? str.find("nan"): str.size()): str.find("inf");
    size_t final = ((index == str.size() || str.size() < 4) ? str.npos : ((str[index + 3] == 'f') ? 4 : 3));
    str.erase(index , final);
    index = str.size();

    if((index == 1 && (str.find_first_of("-+") || flag) ) || index > 1)
        return 1;
    return 0;
}


int Parse(std::string &str)
{

    size_t flag  = (str[0] == '-' || str[0] == '+');
    flag = str.find_first_not_of("0123456789." , flag);
    flag = !flag ? 1 : flag ;
    flag *= !(flag == str.npos || ((flag == str.rfind("f") && flag == str.size() - 1 )   && str.find(".") != str.npos ));
    flag += (str.find(".") != str.rfind(".") && str.find(".") != str.npos);

    return ((flag && str.size() != 1));
}




void ScalarConverter::convert(std::string str)
{
    double value = 0 ;
    std::stringstream ss;
    ss << (int)str[0];
    str = str.size() == 1 ? ss.str() : str;
    if(!Infinity(str) || !Parse(str))
        value = std::atof(str.c_str());
    else
    {
        std::cout << "Error" << std::endl;
        return ;
    }

    PrintCasting(value , str);
}
