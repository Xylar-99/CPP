

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
    if(!str.compare("nan"))
        inff = 0.0f / 0.0f;
}


void ScalarConverter::convert(std::string str)
{

    double value;

    std::istringstream iss(str);
    iss >> value;

    std::cout << value << std::endl;
    Inff(str , value);
    PrintCasting(value);
}
