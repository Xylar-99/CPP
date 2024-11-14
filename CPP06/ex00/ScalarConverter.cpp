

#include "ScalarConverter.hpp"

#include<bits/stdc++.h> 
#include <cstdlib>
#include <string>

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


void Inff(std::string str , double &inff)
{
    if(!str.compare("-inff") || !str.compare("+inff") || !str.compare("-inf") || !str.compare("+inf"))
        inff = 1.0f / 0.0f * (str[0] == '-' ? -1 : 1 ) ;
    if(!str.compare("nan") || !str.compare("nanf"))
        inff = 0.0f / 0.0f;
}


void Parse(std::string str)
{
    int flag = (str[0] == '-' || str[0] == '+') ;

    if(str.find_first_not_of("0123456789" ,  flag) != str.npos && str != "nan")
        std::cerr << "Error" << std::endl;
    else
        std::cout <<  str <<  std::endl;
}

double forinff(std::string str)
{
    std::string res = "";
    int index = (str.find("inf") == str.npos) ? str.size(): str.find("inf");
    int final = index + (str[index + 3] == 'f' ? 4 : 3);
    res += str.substr(1 , index );
    res += str.substr(final);

    double value = 0;
    if(!res[0])
        value = std::numeric_limits<float>::infinity() * (str[0] == '-' ?  (-1) : 1);
    if(!str.compare("nan"))
        value = std::numeric_limits<float>::quiet_NaN();

    return(value);
}




void ScalarConverter::convert(std::string str)
{


    // std::cout << str.find("inf") << std::endl;

    // // Parse(str);

    // // // float aa = +0.f;
    // std::cout << str << std::endl;
    double value;

    std::istringstream(str) >> value;

    // double vv = ( -1.0f / value ) * 1;

    std::cout << forinff(str) << std::endl;
    // std::cout << value << "        " <<   vv << "          " << (0.0f / 0.0f) * (-1) << "       "  <<  std::endl;

   
    // res += 
    // str.replace(index ,  , "");
    // str.replace(str.find("inf") , str.find("inf") + 3 , "");

    // std::cout << res << "      "  << std::endl;
    // (void)str;
    // double aa = forinff(str) / 0.0;

    // std::cout << aa << std::endl;
    // std::cout << aa << std::endl;
    // std::cout << str << std::stof(str) << std::endl;


    // Inff(str , value);
    // PrintCasting(value);
}
