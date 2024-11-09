

#include "ScalarConverter.hpp"

#include<bits/stdc++.h> 
#include <cstdlib>
#include <string>

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


int checkString(std::string str)
{
    
}



void ScalarConverter::convert(std::string str)
{

    // int value = atoi(str.c_str());

    std::istringstream iss(str);
    float valuef;
    iss >> valuef;



    // float valuef = std::atof(str.c_str());

    std::cout << "VALUE == " << valuef << std::endl;
    std::cout << "char   : " << static_cast<char>(valuef) << std::endl;
    std::cout << "int    : " << static_cast<int>(valuef) << std::endl;
    std::cout << "float  : " << static_cast<float>(valuef) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(valuef) << std::endl;
}
