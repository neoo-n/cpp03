/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:44:43 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/12 15:15:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScavTrap.hpp"

// ------------------------ CONSTRUCTOR & DESTRUCTOR ---------------------------

ScavTrap::ScavTrap(void)
{
	this->_hit_pt = 100;
	this->_energy_pt = 50; 
	this->_attack_dmg = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
: ClapTrap(other)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name)
{
	this->_hit_pt = 100;
	this->_energy_pt = 50; 
	this->_attack_dmg = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	this->_name = obj._name;
	this->_hit_pt = obj._hit_pt;
	this->_energy_pt = obj._energy_pt;
	this->_attack_dmg = obj._attack_dmg;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

// -------------------------------- METHODS ------------------------------------

void	ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;

}

void	ScavTrap::guardGate(void)
{
	if (this->_hit_pt == 0)
	{
		std::cout << this->_name << " has no hit point left, cannot guard gate" << std::endl;
		return ;
	}
	std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}
