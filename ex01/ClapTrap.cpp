/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:38 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/24 11:51:27 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Default Constructor */
ClapTrap::ClapTrap()
	: name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created by default" << std::endl;
}

/* Constructor with parameters */
ClapTrap::ClapTrap(const std::string &name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

/* Copy constructor */
ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name + "_copy"), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap " << name << " has been copied" << std::endl;
}

/* Assignment operator */
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name + "_assigned";
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " has been assigned" << std::endl;
	return (*this);
}

/* Member function for ClapTrap to attack a target */
void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " cannot attack because it has no hit points!" << std::endl;
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " cannot attack because it has no energy points!" << std::endl;
	else if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
}

/* Member function for ClapTrap to take damage */
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hitPoints)
		hitPoints = 0;
	if (hitPoints == 0)
		std::cout << "ClapTrap " << name << " has no hit points left!" << std::endl;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std:: endl;
	std::cout << "Remaining hit points: " << hitPoints << std::endl;
}

/* Member function for ClapTrap to be repaired */
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
		std::cout << "Current hit points: " << hitPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " can't repair itself because it has no hit points left!" << std:: endl;
	else
		std::cout << "ClapTrap " << name << " can't repair itself because it has no energy points left!" << std:: endl;

}
