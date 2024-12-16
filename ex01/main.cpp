/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:11 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/13 18:09:35 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clap("Clapper");

	clap.attack("Target 1");
	clap.takeDamage(3);
	clap.beRepaired(5);
    clap.attack("Target 2");
    clap.takeDamage(15);
    clap.beRepaired(10);

	ClapTrap clap2 = clap;
	clap2.attack("Target 3");
	 
	 ClapTrap clap3("Smahser");
	 clap3 = clap;
	 clap3.takeDamage(2);

	 return (0);
}
