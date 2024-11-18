


#ifndef ARRAY_HPP
#define ARRAY_HPP



#include <iostream>


template <class T>


class Array
{
private:
	T *arr;
	unsigned int ss;
public: 
	Array();
	Array(unsigned int n);
	T& operator[](int index);
	Array(const Array &obj);
	Array & operator=(const Array &obj);
	unsigned int size();
	~Array();

};


#include "Array.tpp"

#endif
