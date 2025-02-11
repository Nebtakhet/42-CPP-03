/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:45:47 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 13:12:56 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructor */
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " has been constructed" << std::endl;
}

/* Copy constructor */
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << other.name << " has been copied" << std::endl;
}

/* Assignment operator */
FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "FragTrap " << name << " has been assigned" << std::endl;
	}
	return (*this);
}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
}

/* Member function for FragTrap to greet you */
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " high fives you :)" << std::endl;
}
