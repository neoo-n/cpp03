/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:26:15 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/19 14:58:40 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	c1("left sock");
	ClapTrap	c2("right sock");

	std::cout << std::endl << "----------------------- ATTRIBUTES ---------------------" << std::endl;
	std::cout << "name : " << c1.getName() << ", " << c2.getName() << std::endl;
	std::cout << "hit pts : " << c1.getHit() << ", " << c2.getHit() << std::endl;
	std::cout << "energy pts : " << c1.getEnergy() << ", " << c2.getEnergy() << std::endl;
	std::cout << "attack dmgs : " << c1.getAttack() << ", " << c2.getAttack() << std::endl;

	std::cout << std::endl << "----------------------- ATTACK -------------------------" << std::endl;
	c1.attack("right sock");
	c2.takeDamage(c1.getAttack());
	std::cout << "energy pts of left sock : " << c1.getEnergy() << std::endl;
	std::cout << "hit pts of right sock : " << c2.getHit() << std::endl;
	
	std::cout << "*********** AUGMENTATION OF ATTACK DMG OF LEFT SOCK ***********" << std::endl;
	c1.setAttack(3);
	for (int i = 0; i < 5 ; i++)
	{
		c1.attack("right sock");
		c2.takeDamage(c1.getAttack());
		std::cout << "energy pts of left sock : " << c1.getEnergy() << std::endl;
		std::cout << "hit pts of right sock : " << c2.getHit() << std::endl;
	}

	std::cout << std::endl << "----------------------- REPAIR -------------------------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		c1.beRepaired(2);
		std::cout << "hit pts of left sock : " << c1.getHit() << " and energy pts : " << c1.getEnergy() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::endl << "-------------------- DESTRUCTORS ------------------------" << std::endl;
	return (0);
}