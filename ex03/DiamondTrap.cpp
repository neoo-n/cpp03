/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:02:52 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/12 22:56:01 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "DiamondTrap.hpp"

// ------------------------ CONSTRUCTORS & DESTRUCTOR ---------------------------

DiamondTrap::DiamondTrap(void)
: _name(0), ClapTrap("_clap_name"), FragTrap()
{
	this->_energy_pt = 50;
}

// -------------------------------- METHODS ------------------------------------

void	DiamondTrap::attack(const std::string &target)
{
	if (this->_energy_pt == 0)
	{
		std::cout << this->_name << " has no energy point left, cannot attack" << std::endl;
		return ;
	}
	if (this->_hit_pt == 0)
	{
		std::cout << this->_name << " has no hit point left, cannot attack" << std::endl;
		return ;
	}
	this->_energy_pt--;
	std::cout << "DiamondTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
}

void	DiamondTrap::(void)
{
	if (this->_energy_pt == 0)
	{
		std::cout << this->_name << " has no energy point left, cannot ask for high fives" << std::endl;
		return ;
	}
	if (this->_hit_pt == 0)
	{
		std::cout << this->_name << " has no hit point left, cannot ask for high fives" << std::endl;
		return ;
	}
	std::cout << this->_name << " wants a high five" << std::endl;
}