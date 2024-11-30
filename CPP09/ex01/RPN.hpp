


#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream> 
#include <stack>

#include <stdlib.h>

class RPN
{
private:
	std::stack<int> data;

public: 
	RPN();
	RPN(const RPN &obj);
	RPN & operator=(const RPN &obj);
	~RPN();

public:
	void _RPN(std::string str);
	void calculate(std::string &str);
};

#endif
