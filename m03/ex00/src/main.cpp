/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 12:05:46 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"

int	main(void) {

	ClapTrap	John("John Wick");
	ClapTrap	Marquis("le Marquis");
	ClapTrap	Caine("Caine");
	
	std::cout << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << John.getName() << std::endl;
	std::cout << John.getHP() << " HP" << std::endl;
	std::cout << John.getMP() << " MP" << std::endl;
	std::cout << John.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << Caine.getName() << std::endl;
	std::cout << Caine.getHP() << " HP" << std::endl;
	std::cout << Caine.getMP() << " MP" << std::endl;
	std::cout << Caine.getAD() << " AD" << std::endl;
	std::cout << "--------------------" << std::endl;
	
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
	John.attack("Le Marquis");
	Marquis.takeDamage(10);
	std::cout << std::endl;

	John.takeDamage(1);
	John.attack("Caine");
	Marquis.beRepaired(5);
	
	return (0);
}