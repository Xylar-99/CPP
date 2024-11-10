


#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>
#include "ICharacter.hpp"
#include "Amateria.hpp"



class Character : public ICharacter
{
public:
	Character();
	Character(std::string name);
	Character(const Character &obj);
  	Character & operator=(const Character &obj);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
  	~Character();
private:
	std::string name;
	AMateria **ptr;

};

#endif
