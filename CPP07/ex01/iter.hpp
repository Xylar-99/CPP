


#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>

void Iter(T add[] , unsigned int size , T (*funcptr)(T &))
{
    for(unsigned int  i = 0; i < size  ; i++)
        funcptr(add[i]);
}

#endif
