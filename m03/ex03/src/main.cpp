/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 12:13:20 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"
# include "../inc/ScavTrap.hpp"
# include "../inc/FragTrap.hpp"
# include "../inc/DiamondTrap.hpp"

int	main(void) {

	ScavTrap	Table("The Table");
	ClapTrap	John("John Wick");
	ClapTrap	Marquis("Le Marquis");
	ClapTrap	Caine("Caine");
	ClapTrap	Manager("The Manager");
	
	std::cout << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << John.getName() << std::endl;
	std::cout << John.getHP() << " HP" << std::endl;
	std::cout << John.getMP() << " MP" << std::endl;
	std::cout << John.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << Table.getName() << std::endl;
	std::cout << Table.getHP() << " HP" << std::endl;
	std::cout << Table.getMP() << " MP" << std::endl;
	std::cout << Table.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	
	std::cout << std::endl;
	Table.attack("The Manager");
	Manager.takeDamage(20);
	Manager.beRepaired(10);
	
	John.attack("Caine");
	Caine.takeDamage(6);
	std::cout << std::endl;
	
	Caine.attack("John Wick");
	std::cout << std::endl;
	John.takeDamage(-6);
	std::cout << std::endl;
	John.takeDamage(7);
	std::cout << std::endl;
	
	John.beRepaired(1);
	std::cout << std::endl;
	Caine.beRepaired(-9);
	std::cout << std::endl;
	Caine.beRepaired(3);
	std::cout << std::endl;
	
	Caine.attack("John Wick");
	John.takeDamage(3);

	std::cout << std::endl;
	Table.guardGate();
	std::cout << std::endl;
	
	John.attack("Le Marquis");
	Marquis.takeDamage(10);
	std::cout << std::endl;

	John.takeDamage(1);
	John.attack("Caine");
	Marquis.beRepaired(5);

	FragTrap	Punisher("The Punisher");
	std::cout << "--------------------" << std::endl;
	std::cout << Punisher.getName() << std::endl;
	std::cout << Punisher.getHP() << " HP" << std::endl;
	std::cout << Punisher.getMP() << " MP" << std::endl;
	std::cout << Punisher.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << std::endl;
	Punisher.attack("The Table");
	Table.takeDamage(70);
	Punisher.beRepaired(70);
	std::cout << std::endl;
	
	DiamondTrap	Chuck("Chuck Norris");
	std::cout << "--------------------" << std::endl;
	std::cout << Chuck.getName() << std::endl;
	std::cout << Chuck.getHP() << " HP" << std::endl;
	std::cout << Chuck.getMP() << " MP" << std::endl;
	std::cout << Chuck.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << std::endl;
	Chuck.attack("The Punisher");
	Punisher.takeDamage(30);
	Chuck.beRepaired(20);
	std::cout << std::endl;
	Chuck.whoAmI();
	std::cout << std::endl;

	return (0);
}