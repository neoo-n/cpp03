/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:04:41 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/12 16:51:37 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

// ------------------------ CONSTRUCTORS & DESTRUCTOR ---------------------------

FragTrap::FragTrap(void)
{
	_hit_pt = 100;
	_energy_pt = 100;
	_attack_dmg = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
: ClapTrap(other)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name)
: ClapTrap(name)
{
	this->_hit_pt = 100;
	this->_energy_pt = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_pt = obj._hit_pt;
		this->_energy_pt = obj._energy_pt;
		this->_attack_dmg = obj._attack_dmg;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

// -------------------------------- METHODS ------------------------------------

void	FragTrap::attack(const std::string &target)
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
	std::cout << "FragTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
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