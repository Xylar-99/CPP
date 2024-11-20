

#include "Span.hpp"
#include <algorithm>
#include <iostream>

Span::Span()
{
    index = 0;
    size = 0;
}

Span::Span(int n)
{
    size = n;
    index = 0;
    if(n < 0)
        throw std::out_of_range("NOT VALIDE");
    data.reserve(n);
}


Span::Span(const Span &obj)
{
    this->data.assign(obj.data.begin() , obj.data.end());
}

Span & Span::operator=(const Span &obj)
{
    data.clear();
    this->data.assign(obj.data.begin() , obj.data.end());
    return *this;
}

Span::~Span()
{
    data.clear();
}


void Span::addNumber(int value)
{
    if(index >= size)
        return ;
    data.push_back(value);
    index++;
}

void Span::PrintVector()
{
    for(int i = 0; (unsigned long)i < data.size() ; i++)
        std::cout << data[i] << std::endl;
}

int Span::shortestSpan()
{
    std::vector<int> arr;
    std::sort(data.begin() , data.end());

    for(int i = 1; (unsigned long)i < data.size() ;i++)
        arr.push_back((data[i] - data[i - 1]));

    
    std::sort(arr.begin() , arr.end());
    return arr[0];
}


int Span::longestSpan()
{
    std::sort(data.begin() , data.end());
    return (data.back() - data.front());
}



