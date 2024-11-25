


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template<class T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack &obj);
    MutantStack & operator=(const MutantStack &obj);
    ~MutantStack();
    
public:
    typedef typename std::deque<T>::iterator iterator;
    iterator end();
    iterator begin();
};

#include "MutantStack.tpp"

#endif
