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
: _name(0), ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
	this->_energy_pt = 50;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
: ClapTrap(other._name + "_clap_name"), ScavTrap(other), FragTrap(other)
{
	this->_energy_pt = 50;
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
: _name(name), ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_energy_pt = 50;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	this->_name = obj._name;
	this->ClapTrap::_name = obj._name + "_clap_name";
	this->_hit_pt = obj._hit_pt;
	this->_energy_pt = obj._energy_pt;
	this->_attack_dmg = obj._attack_dmg;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
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

void	DiamondTrap::whoAmI(void)
{
	if (this->_energy_pt == 0)
	{
		std::cout << this->_name << " has no energy point left, cannot tell you who he is" << std::endl;
		return ;
	}
	if (this->_hit_pt == 0)
	{
		std::cout << this->_name << " has no hit point left, cannot tell you who he is" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap name is " << this->_name;
	std::cout << " and his ClapTrap name is " << this->ClapTrap::_name << std::endl;
}