/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:31 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/26 00:00:34 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Phonebook.Class.hpp"

Phonebook::Phonebook(void) {
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

Phonebook::addContact(void) {
	int	i = Phonebook::getIndex(void);

	
	i += 1;
	Phonebook::setIndex(i);
}

Phonebook::getContact(int i) {
	this->showDatabase(void);	
	
	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else if (std::input.size() > 1 || std::isdigit(input[i]) == 0 || input[i] > 48 + 7) {
			std::cout << "Choisissez une valeur entre 0 et 7" << std::endl;
			input.clear;
		}
		else {
			int	i = std::atoi(input);
			std::cout << "Index			 : " << input << std::endl ;
			std::cout << "First Name	 : " << Phonebook::m_directory[i].m_firstName << std::endl;
			std::cout << "Last Name		 : " << Phonebook::m_directory[i].m_lastName << std::endl;
			std::cout << "Nickname		 : " << Phonebook::m_directory[i].m_nickname << std::endl;
			std::cout << "Phone Number   : " << Phonebook::m_directory[i].m_phone<< std::endl;
			std::cout << "Darkest Secret : " << Phonebook::m_directory[i].m_ecret << std::endl;
			break ;
		}
	}
}

Phonebook::showDatabase(void) {
	std::cout << setw(10) << "[ Repertoire - Face de Bouc ]" << std::endl;
	std::cout << setw(10); std::cout.width(43) << "   Index  " << "|" << "First Name" << "|" << " Last Name" << "|" << " Nickname " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	Phonebook::setIndex(0);
	for (int i = -1; i < 8; ++i) {
		std::string	buffer;
		std::string index = this->m_index;
		if (std::this->Contact.m_directory[i].m_firstName.size() > 10)
			std::string fname = this->Contact.m_directory[i].m_firstName.substr(0,9) + ".";
		else
			std::string fname = this->Contact.m_directory[i].m_firstName;
			
		if (std::this->Contact.m_directory[i].m_lastName.size() > 10)
			std::string lname = this->Contact.m_directory[i].m_lastName.substr(0,9) + ".";
		else
			std::string lname = this->Contact.m_directory[i].m_lastName;
			
		if (std::this->Contact.m_directory[i].m_nickame.size() > 10)
			std::string nname = this->Contact.m_directory[i].m_nickame.substr(0,9) + ".";
		else
			std::string nname = this->Contact.m_directory[i].m_nickame;
		std::cout << setw(10); std::cout.width(43) << index << "|" << fname << "|" << lname << "|" << nname << std::endl;
		Phonebook::setIndex(0 + i);
	}
	Phonebook::setIndex(0);

	std::cout << "Enter an Entry Index to Search" << std::endl;
}


Phonebook::getIndex(void) {
	if (this->m_Index > 9)
		Phonebook::setIndex(0);
	return (this->m_Index);
}

Phonebook::setIndex(int i) {
	this->m_Index = i;
}