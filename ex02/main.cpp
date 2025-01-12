/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/12 22:53:56 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap("Clapper");

	clap.attack("Bob");
	clap.takeDamage(3);
	clap.beRepaired(5);
    clap.attack("Jose");
    clap.takeDamage(15);
    clap.beRepaired(10);

	ClapTrap clap2 = clap;
	clap2.attack("Fifo");
	 
	 ClapTrap clap3("Smasher");
	 clap3 = clap;
	 clap3.takeDamage(2);

	ScavTrap scav("Scavenger");
	scav.attack("Bob");
	scav.takeDamage(3);
	scav.beRepaired(5);
	scav.attack("Jose");
	scav.takeDamage(15);
	scav.beRepaired(10);
	scav.guardGate();

	FragTrap frag("Fragger");
	frag.attack("Bob");
	frag.takeDamage(50);
	frag.beRepaired(30);
	frag.highFivesGuys();
	
	return (0);
}
