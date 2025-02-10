/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/07 13:17:33 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clap("Clapper");

	std::cout << "ClapTrap attack, beRepaired and takeDamage\n" << std::endl;	
	
	clap.attack("Bob");
	clap.takeDamage(3);
	clap.beRepaired(5);

	std::cout << std::endl;
	
    clap.attack("Jose");
    clap.takeDamage(15);
    clap.beRepaired(10);

	std::cout << std::endl << "Testing energy depletion\n" << std::endl;

	ClapTrap exhausted("Exhausto");
	for (int i = 0; i < 10; i++)
		exhausted.attack("Fifo");
	exhausted.attack("Should fail");	
	
	std::cout << std::endl << "ClapTrap copy constructor\n" << std::endl;
	
	ClapTrap clap2 = clap;
	clap2.attack("Fifo");
	 
	std::cout << std::endl << "ClapTrap assignation operator" << std::endl << std::endl;
	ClapTrap clap3("Smasher");
	clap3 = clap;
	clap3.takeDamage(2);

	std::cout << std::endl << "ClapTrap destructor" << std::endl << std::endl;

	return (0);
}
