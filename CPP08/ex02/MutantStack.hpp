


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<class T>
class MutantStack
{
private:
    std::stack<T> ss;
    
public: 
    MutantStack()
    {
        
    }
    // MutantStack(const MutantStack &obj);
    // MutantStack & operator=(const MutantStack &obj);
    // ~MutantStack();


public: // member function stack
    void push(int n)
    {
        ss.push(n);
    }
    void pop()
    {
        ss.pop();
    }
    int size()
    {
        return ss.size();
    }
    T top()
    {
        return (ss.top());
    }
    

};

#endif
