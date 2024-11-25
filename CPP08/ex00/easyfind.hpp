
#ifndef  EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <vector>

#include <iostream>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

template <class T>
void easyfind(T p1 , int p2);

template <class T>
void easyfind(T *p1 , int p2);



#include "easyfind.tpp"

#endif