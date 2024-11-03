
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:

    std::string getType() const;
    virtual void makeSound() const  = 0;
protected:
    std::string type;
};


#endif