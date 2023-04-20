/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/20 13:50:06 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"
# include "../inc/ScavTrap.hpp"
# include "../inc/FlapTrap.hpp"

int	main(void) {

	ScavTrap	Table("The Table");
	ClapTrap	John("John Wick");
	ClapTrap	Marquis("Le Marquis");
	ClapTrap	Caine("Caine");
	ClapTrap	Manager("The Manager");
	
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

	FlapTrap	Chuck("Chuck Norris");
	Chuck.attack("The Table");
	Table.takeDamage(70);
	Chuck.beRepaired(70);
	std::cout << std::endl;
	
	return (0);
}