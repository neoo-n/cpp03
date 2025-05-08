/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:34:44 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/08 14:40:55 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string 	_name;
		unsigned int	_hit_pt;
		unsigned int	_energy_pt;
		unsigned int	_attack_dmg;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &other);
		ClapTrap(const std::string name, const unsigned int hit, const unsigned int energy, const unsigned int attack);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap();

		std::string		getName(void) const;
		unsigned int	getHit(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttack(void) const;

		void	setName(std::string name);
		void	setHit(unsigned int hit);
		void	setEnergy(unsigned int energy);
		void	setAttack(unsigned int attack);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif