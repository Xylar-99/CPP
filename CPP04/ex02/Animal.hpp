
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
    Animal();
    Animal(const Animal &obj);
    Animal & operator=(const Animal &obj);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~Animal();
protected:
    std::string type;
};


#endif