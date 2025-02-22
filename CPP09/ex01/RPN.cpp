

#include "RPN.hpp"



RPN::RPN(){}

RPN::RPN(const RPN &obj)
{
    *this = obj;
}

RPN & RPN::operator=(const RPN &obj)
{
    (void)obj;
    return *this;
}

RPN::~RPN(){}


RPN::RPN(const char *s) : _str(s) {}


void RPN::throwError(bool expr, const char *err)
{
    std::string err_msg = "RPN : ";
    err_msg += std::string(err);
    if(expr) throw(std::runtime_error(err_msg));
}


int RPN::Calculator(std::string &c)
{
    std::cout << _data.size() << std::endl;
    throwError(_data.size() != 2 , " 2 Invalid input. Please enter a valid number or operator.");

    int va2 = _data.top();
    _data.pop();
    int va1 = _data.top();
    _data.pop();
    switch (c[0])
    {
    case '+':
        return(va2  + va1);
    case '-':
        return(va2  - va1);
    case '*':
        return(va2  * va1);
    case '/':
        return(va2  / va1);
    default:
        break;
    }
    return 1;
}

void RPN::CheckString()
{
    int psh;
    throwError(_str.find_first_not_of("0123456789*/-+ ") != _str.npos , "Invalid input. Please enter a valid number or operator.");
    std::stringstream ss(_str);
    std::string word;
    while (ss >> word) 
    {
        throwError(word.size() != 1 , "1 Invalid input. Please enter a valid number or operator.");

        if(word.find("+/-*") != word.npos)
            psh = Calculator(word);
        else
            psh = atoi(word.c_str());
        _data.push(psh);
    }
    std::cout << _data.size() << std::endl;
    throwError(_data.size() != 1 , "3 Invalid input. Please enter a valid number or operator.");
    std::cout << _data.top() << std::endl;
}