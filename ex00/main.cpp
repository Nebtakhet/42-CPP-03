/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/16 14:48:56 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

	 return (0);
}
