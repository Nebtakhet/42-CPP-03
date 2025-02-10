/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:45:47 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/10 19:17:07 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " has been constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << other.name << " has been copied" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "FragTrap " << name << " has been assigned" << std::endl;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " high fives you :)" << std::endl;
}
