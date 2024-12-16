/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:38 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/16 15:00:04 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap " << name << " has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "Clap Trap " << name << " has been assigned" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " cannot attack because it has no hit points!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " cannot attack because it has no energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std:: endl;
	std::cout << "Remaining hit points: " << hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
		std::cout << "Current hit points: " << hitPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " can't repair itself becase it has no hit points left!" << std:: endl;
	else
		std::cout << "ClapTrap " << name << " can't repair itself becase it has no energy points left!" << std:: endl;

}