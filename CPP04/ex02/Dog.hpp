
#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &obj);
    Dog & operator=(const Dog &obj);
    void makeSound() const;
    ~Dog();
private:
    Brain *ptr;
};


#endif