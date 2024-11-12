
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal & operator=(const WrongAnimal &obj);
    std::string getType() const;
    void makeSound() const;
    ~WrongAnimal();
protected:
    std::string type;
};


#endif