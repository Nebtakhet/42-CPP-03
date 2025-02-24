/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:38:58 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/24 11:45:49 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		~ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);

		void	attack(const std::string &target) override;
		void	guardGate();
};

#endif
