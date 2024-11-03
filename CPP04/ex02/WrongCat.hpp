
#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat & operator=(const WrongCat &obj);
    void makeSound() const;
    ~WrongCat();

};


#endif