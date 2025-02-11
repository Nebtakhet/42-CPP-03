/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:13:28 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 13:29:22 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
		
	public:
		ClapTrap(const std::string &name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &other);

		ClapTrap &operator=(const ClapTrap &other);

		virtual void	attack(const std::string &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		
};

#endif