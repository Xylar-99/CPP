


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
  Array()
  {
    arr = new T(0);
    ss = 0;
  }
  Array(unsigned int n)
  {
    Array ptr[n];
    ss = n;
  }


  Array & operator=(const Array &obj)
  {
    for(int i = 0 ; i < ss && i < obj.ss;i++)
      this->arr[i] = obj.arr[i];
    return  *this;
  }

unsigned int size()
{
  return ss;
}
  ~Array(){};

};

#endif
