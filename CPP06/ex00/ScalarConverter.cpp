

#include "ScalarConverter.hpp"

#include<bits/stdc++.h> 
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>

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



void PrintCasting(double &value)
{

    std::cout <<  "char   : " << static_cast<char>(value) << std::endl;
    std::cout << "int    : " << static_cast<int>(value) << std::endl;
    std::cout << "float  : " << static_cast<float >(value) << "f" << std::endl;
    std::cout << "double : " << static_cast<double >(value) << std::endl;

}



int forinff(std::string str )
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

    return ((flag && str.size() != 1) ? 1 : 0);
}




void ScalarConverter::convert(std::string str)
{

    double value = 0 ;
    std::stringstream ss;
    ss << (int)str[0];
    str = str.size() == 1 ? ss.str() : str;
    if(!forinff(str) || !Parse(str))
        value = std::atof(str.c_str());
    else
        std::cout << "Error" << std::endl;

    PrintCasting(value);
}
