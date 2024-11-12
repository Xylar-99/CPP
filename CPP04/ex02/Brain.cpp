

#include "Brain.hpp"


Brain::Brain()
{
    for(int i = 0; i < 100 ;i++)
        ideas[i] = "";
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
    std::cout << "Brain Copy assignment operator calle" << std::endl;
    return *this;
}

Brain::~Brain()
{
        std::cout << "Brain Destructor called" << std::endl;

}
