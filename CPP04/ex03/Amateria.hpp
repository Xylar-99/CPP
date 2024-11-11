

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;
class AMateria
{
  protected:
	std::string type;
  public:
	AMateria(std::string const &type);
	AMateria();
	virtual ~AMateria() = 0;
	AMateria(const AMateria &obj);
	AMateria &operator=(const AMateria &obj);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter& target);
};


#include "ICharacter.hpp"

#endif
