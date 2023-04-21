/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 14:27:42 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"
# include "../inc/ScavTrap.hpp"
# include "../inc/FragTrap.hpp"

int	main(void) {

	std::cout << "-------------- INITIALIZATION ---------------" << std::endl;
	ClapTrap	John("John Wick");
	ClapTrap	Caine("Caine");
	ClapTrap	Manager("The Manager");
	
	std::cout << std::endl;
	std::cout << "--------------- BASE DATA ---------------" << std::endl;
	std::cout << John.getName() << std::endl;
	std::cout << John.getHP() << " HP" << std::endl;
	std::cout << John.getMP() << " MP" << std::endl;
	std::cout << John.getAD() << " AD" << std::endl;
	
	std::cout << std::endl;
	std::cout << "--------------- BASIC TESTS EX00 ---------------" << std::endl;
	std::cout << std::endl;
	
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
	std::cout << "--------------- BASIC TESTS EX01 ---------------" << std::endl;
	
	ScavTrap	Marquis("Le Marquis");
	std::cout << std::endl;
	
	std::cout << "--------------- BASE DATA ---------------" << std::endl;
	std::cout << Marquis.getName() << std::endl;
	std::cout << Marquis.getHP() << " HP" << std::endl;
	std::cout << Marquis.getMP() << " MP" << std::endl;
	std::cout << Marquis.getAD() << " AD" << std::endl;
	std::cout << std::endl;
	
	Manager.takeDamage(20);
	Manager.beRepaired(10);
	
	std::cout << std::endl;
	Marquis.guardGate();
	std::cout << std::endl;
	
	John.attack("Le Marquis");
	Marquis.takeDamage(10);
	std::cout << std::endl;

	John.takeDamage(1);
	John.attack("Caine");
	Marquis.beRepaired(5);

	std::cout << std::endl;
	std::cout << REDB "--------------- BASIC TESTS EX02 ---------------" NC << std::endl;
	
	FragTrap	Punisher("The Punisher");
	std::cout << std::endl;
	
	std::cout << "--------------- BASE DATA ---------------" << std::endl;
	std::cout << Punisher.getName() << std::endl;
	std::cout << Punisher.getHP() << " HP" << std::endl;
	std::cout << Punisher.getMP() << " MP" << std::endl;
	std::cout << Punisher.getAD() << " AD" << std::endl;
	std::cout << std::endl;
	
	Punisher.attack("The Marquis");
	Punisher.beRepaired(-10);
	Marquis.takeDamage(70);
	Punisher.beRepaired(70);
	
	std::cout << std::endl;
	Punisher.highFivesGuys();
	std::cout << std::endl;

	return (0);
}