

#include "Array.hpp"


template <class T>
Array<T>::Array()
{
    arr = new T[0];
    ss = 0;
}


template <class T>
Array<T>::Array(unsigned int n)
{
    arr = new T[n];
    ss = n;
}


template <class T>
T& Array<T>::operator[](int index)
{
    if(index < 0 || (unsigned int)index >= ss)
        throw std::out_of_range("NOT VALID INDEX");
    return arr[index];
}


template <class T>
Array<T>::Array(const Array &obj)
{
    this->arr = new T[obj.ss];
	this->ss = obj.ss;
    for(unsigned int i = 0 ; i < obj.ss;i++)
        this->arr[i] = obj.arr[i];
}



template <class T>
Array<T> & Array<T>::operator=(const Array &obj)
{
    if(this != &obj)
    {
    delete[] arr;
    this->arr = new T[obj.ss];
	this->ss = obj.ss;
    for(unsigned int i = 0 ; i < obj.ss;i++)
        this->arr[i] = obj.arr[i];
    }
    return  *this;
}


template <class T>
unsigned int Array<T>::size()
{
  return ss;
}


template <class T>
Array<T>::~Array()
{
    delete [] arr;
};
