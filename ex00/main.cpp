/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/26 17:10:29 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clap("Clapper");

	std::cout << "ClapTrap attack, beRepaired and takeDamage" << std::endl << std::endl;	
	clap.attack("Bob");
	clap.takeDamage(3);
	clap.beRepaired(5);
	
    clap.attack("Jose");
    clap.takeDamage(15);
    clap.beRepaired(10);

	std::cout << std::endl << "ClapTrap copy constructor" << std::endl << std::endl;
	
	ClapTrap clap2 = clap;
	clap2.attack("Fifo");
	 
	std::cout << std::endl << "ClapTrap assignation operator" << std::endl << std::endl;
	ClapTrap clap3("Smasher");
	clap3 = clap;
	clap3.takeDamage(2);

	return (0);
}
