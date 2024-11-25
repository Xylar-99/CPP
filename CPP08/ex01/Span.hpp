


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
class Span
{
private:
    int index ;
    int size ;
    std::vector<int> data;
public: 
    Span();
    Span(const Span &obj);
    Span & operator=(const Span &obj);
    ~Span();

public:
    Span(int n);
    void addNumber(int value);
    int shortestSpan();
    int longestSpan();
    void PrintVector();

};

#endif
