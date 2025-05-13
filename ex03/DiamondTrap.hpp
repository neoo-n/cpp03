/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:02:55 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/12 22:55:47 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(const std::string name);
		DiamondTrap	&operator=(const DiamondTrap &obj);
		~DiamondTrap();

		std::string	getName(void) const;
		void		setName(std::string n_name);

		using	ScavTrap::attack;
		void	whoAmI(void);
};

#endif