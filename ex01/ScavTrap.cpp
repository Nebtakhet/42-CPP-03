/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:13 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 13:11:25 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructor */
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}

/* Copy constructor */
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << name << " has been copied" << std::endl;
}

/* Assignment operator */
ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "ScavTrap " << name << " has been assigned" << std::endl;
	}
	return (*this);
}

/* Member function for ScavTrap to attack a target */
void	ScavTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " cannot attack because it has no hit points!" << std::endl;
	else
		std::cout << "ScavTrap " << name << " cannot attack because it has no energy points!" << std::endl;
}

/* Member function for ScavTrap to guard the gate */
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
