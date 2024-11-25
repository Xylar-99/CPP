

#include "MutantStack.hpp"




template <class T>
MutantStack<T>::MutantStack(){}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &obj) { (void)obj; }

template<class T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &obj)
{
    (void)obj;
    return *this;
}

template<class T>
MutantStack<T>::~MutantStack(){}


template <class T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}


template <class T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}
