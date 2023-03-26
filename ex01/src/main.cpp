/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:47:09 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/25 18:43:44 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <istream>
# include <sstream>
# include <string>
# include "../inc/Phonebook.Class.hpp"

int main (int argc, char **argv) { 
	
	if (argc > 1) {
		std::cout << "Usage : ./facedebouc" << std::endl;
		return 0;
	}
	std::cout << "Vous venez de composer 3615 FACE DE BOUC" << std::endl;
	std::cout << "Pour créer un nouveau contact, tapez ADD" << std::endl;
	std::cout << "Pour chercher un contact, tapez SEARCH" << std::endl;
	std::cout << "Pour quitter, tapez EXIT" << std::endl;

	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof()) {
			exit (0);
		} else if (input.compare("ADD") == 0) {
			Phonebook::addContact();
		} else if (input.compare("SEARCH") == 0) {
			search();
		} else if (input.compare("EXIT") == 0) {
			break ;
		} else {
			input.clear();
		}
	}	
	return 0;
}
