/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:13 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/16 14:44:47 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << "attacks" << target << ", causing" << attackDamage << " points of damage!" << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " cannot attack because it has no hit points!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " cannot attack because it has no energy points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std:: endl;
}
