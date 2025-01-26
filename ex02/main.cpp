/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/26 18:14:05 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	std::cout << "ClapTrap tests\n" << std::endl;
	
	ClapTrap clap("Clapper");

	clap.attack("Bob");
	clap.takeDamage(3);
	clap.beRepaired(5);

	std::cout << "\nFragTrap tests\n" << std::endl;
	
	FragTrap frag("Fragger");
	
	frag.attack("Bob");
	frag.takeDamage(50);
	frag.beRepaired(30);
	frag.highFivesGuys();

	std::cout << "\nFragTrap copy constructor\n" << std::endl;
	FragTrap frag2(frag);
	frag2.attack("Bob");
	
	std::cout << "\nFragTrap assignation operator\n" << std::endl;
	FragTrap frag3("Fraggy");
	frag3 = frag;
	frag3.takeDamage(2);
	frag3.highFivesGuys();
	
	std::cout << std::endl;
	
	return (0);
}
