/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:05:40 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/12 16:37:04 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

// ------------------------ CONSTRUCTORS & DESTRUCTOR ---------------------------

ClapTrap::ClapTrap(void)
: _name(0), _hit_pt(10), _energy_pt(10), _attack_dmg(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
: _name(other._name), _hit_pt(other._hit_pt), _energy_pt(other._energy_pt), _attack_dmg(other._attack_dmg)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
: _name(name), _hit_pt(10), _energy_pt(10), _attack_dmg(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->_name = obj._name;
	this->_hit_pt = obj._hit_pt;
	this->_energy_pt = obj._energy_pt;
	this->_attack_dmg = obj._attack_dmg;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

// ------------------------------- GET AND SET ---------------------------------

std::string		ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHit(void) const
{
	return (_hit_pt);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (_energy_pt);
}

unsigned int	ClapTrap::getAttack(void) const
{
	return (_attack_dmg);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHit(unsigned int hit)
{
	_hit_pt = hit;
}
void	ClapTrap::setEnergy(unsigned int energy)
{
	_energy_pt = energy;
}

void	ClapTrap::setAttack(unsigned int attack)
{
	_attack_dmg = attack;
}

// -------------------------------- METHODS ------------------------------------

void	ClapTrap::attack(const std::string &target)
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_pt == 0)
	{
		std::cout << this->_name << " has already no hit point left" << std::endl;
		return ;
	}
	if (this->_hit_pt < amount)
	{
		this->_hit_pt = 0;
		return ;
	}
	this->_hit_pt -= amount;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_pt == 0)
	{
		std::cout << this->_name << " has no energy point left, cannot repair itself" << std::endl;
		return ;
	}
	if (this->_hit_pt == 0)
	{
		std::cout << this->_name << " has no hit point left, cannot repair itself" << std::endl;
		return ;
	}
	this->_energy_pt--;
	this->_hit_pt += amount;
}
