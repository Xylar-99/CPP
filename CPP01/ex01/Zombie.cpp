/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abquaoub <abquaoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:01:57 by abquaoub          #+#    #+#             */
/*   Updated: 2024/09/12 11:44:49 by abquaoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::setName(std::string nn)
{
    name = nn;
}

std::string Zombie::getName()
{
    return name;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie *newZombie(std::string thename)
{
    Zombie *obj = new Zombie;
    obj->setName(thename);
    return (obj);
}

void randomChump(std::string nn)
{
    Zombie *obj = newZombie(nn);
    obj->announce();
    delete obj;
}

Zombie::~Zombie()
{
    std::cout << name << " destructor\n";
};