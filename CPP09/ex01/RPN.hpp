#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream> 
#include <stack>
#include <bits/stdc++.h>

#include <stdlib.h>

class RPN
{
private:
	std::string _str;
	std::stack<int> _data;

public: 
	RPN();
	RPN(const RPN &obj);
	RPN & operator=(const RPN &obj);
	~RPN();

public:
	RPN(const char *);
	int Calculator(std::string &c);
public:
	void throwError(bool , const char *);
	void CheckString();
};

#endif
