

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{

    std::cout << "Brain Copy constructor called" << std::endl;
    *this = obj;
}

Brain & Brain::operator=(const Brain &obj)
{
    (void)obj;
    // if(this != &obj)
    //     this->ideas = obj.ideas;
    std::cout << "Brain Copy assignment operator calle" << std::endl;
    return *this;
}

Brain::~Brain()
{
        std::cout << "Brain Destructor called" << std::endl;

}
