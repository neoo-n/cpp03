/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:34:44 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/06 15:07:38 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string _name;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap();
};


#endif