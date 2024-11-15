

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



void PrintCasting(double value)
{

    std::cout <<  "char   : " << static_cast<char>(value) << std::endl;
    std::cout << "int    : " << static_cast<int>(value) << std::endl;
    std::cout << "float  : " << static_cast<float >(value) << "f" << std::endl;
    std::cout << "double : " << static_cast<double >(value) << std::endl;

}



double forinff(std::string str)
{
    int flag = 0;
    int index = (str.find("inf") == str.npos) ? ((str.find("nan") != str.npos && ++flag) ? str.find("nan"): str.size()): str.find("inf");
    str.erase(index , (str[index + 3] == 'f' ? 4 : 3));
    index = str.size();

    if(index > 1 || (flag && index ) || (index  && !str.find("+-")))
        return 0;
    double value  = (!flag) ? std::numeric_limits<double>::infinity() : std::numeric_limits<double>::quiet_NaN();
    value *= ((!str[0] || str[0] == '+' ) ? 1 : -1 );
    return(value);
}


void Parse(std::string str , double &value)
{

    // = (str[0] == '-' || str[0] == '+');

    size_t flag  = 0;
    flag = str.find_first_not_of("0123456789." , flag);
    flag = !flag ? 1 : flag ;
    flag *= !(flag == str.npos || ((flag == str.rfind("f") && flag == str.size() - 1 )  && str.find(".") != str.npos));
    flag += (str.find(".") != str.rfind(".") && str.find(".") != str.npos);



    if(flag)
        std::cout << "Errorr" << std::endl;
    else
        std::cout <<  str <<  std::endl;
    return ;
    std::istringstream(str) >> value;
}


void ScalarConverter::convert(std::string str)
{
    // float aa = 323f;

    // std::cout << aa << std::endl;
    double value ;
    Parse(str  , value);

    // std::cout << value << std::endl;
    // double value = forinff(str);
    // if(!value)
        // Parse(str  , value);
    // PrintCasting(value);
}
