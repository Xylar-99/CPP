


#ifndef CURE_HPP
#define CURE_HPP

#include "Amateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
public: 
	Cure();
	Cure(const Cure &obj);
  	Cure & operator=(const Cure &obj);
  	~Cure();
	void use(ICharacter& target);
	AMateria* clone() const;


};

#endif
