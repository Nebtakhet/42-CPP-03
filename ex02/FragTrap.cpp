/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:45:47 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/12 23:00:19 by cesasanc         ###   ########.fr       */
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " high fives you :)" << std::endl;
}
