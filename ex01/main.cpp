/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/26 17:51:18 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::cout << "ClapTrap attack, beRepaired and takeDamage\n" << std::endl;	
	
	ClapTrap clap("Clapper");
	
	clap.attack("Bob");
	clap.takeDamage(3);
	clap.beRepaired(5);

	std::cout << "\nScavTrap attack, beRapaired and takeDamage\n" << std::endl;
	
	ScavTrap scav("Scavvy");

	scav.attack("Roberto");
	scav.takeDamage(3);
	scav.beRepaired(5);
	scav.guardGate();

	std::cout << "\nScavTrap copy constructor\n" << std::endl;
	
	ScavTrap scav2(scav);
	scav2.attack("Fifo");
	
	std::cout << "\nScavTrap assignation operator\n" << std::endl;
	
	ScavTrap scav3("Scavenger");
	scav3 = scav;
	scav3.takeDamage(2);

	std::cout << std::endl;

	return (0);
}
