

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


void checkString(std::string &node)
{

    std::string op("+-/*");
    size_t _find = node.find_first_not_of("0123456789");
    size_t _rfind = node.find_last_not_of("0123456789");

    if(_find != node.npos && (op.find(node[_find]) == op.npos || _find != _rfind))
        throw(std::runtime_error("Error"));

}


void RPN::calculate(std::string &str)
{
    int save ;
    int flag ;

    if(data.size() < 2)
        throw(std::runtime_error("Error"));
    save = data.top();
    data.pop();

    flag = !str.compare("+") + !str.compare("-") * 2; 
    flag += !str.compare("*") * 3 + !str.compare("/") * 4;

    switch (flag)
    {
    case 1:
        save += data.top() ;
        break;
    case 2:
        save = data.top() - save;
        break;
    case 3:
        save *= data.top();
        break;
    case 4:
        save = data.top() / save;
    }
    data.pop();
    data.push(save);
}



void RPN::_RPN(std::string str)
{
    std::stringstream s(str);
    std::string ss;
    while(s >> ss)
    {
        checkString(ss);
    
        if(ss.find_first_not_of("+*-/") == ss.npos)
            calculate(ss);
        else
            data.push(atoi(ss.c_str()));
    }
    
    if(data.size() != 1)
        throw(std::runtime_error("Error"));
    std::cout << data.top() << std::endl;
    data.pop();
}
