/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:59:10 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/25 23:53:01 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.Class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName(void) {
	std::cout << "Enter a First Name" << std::endl;
	
	std::string input;
	
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else
			input = this->m_firstName;
	}
	return ;
}

std::string	Contact::getFirstName(int i) {
	return (this->m_FirstName);
}

void	Contact::setLastName(void) {
	std::cout << "Enter a Last Name" << std::endl;
	
	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else
			input = this->m_lastName;
	}
	
	return ;
}

std::string	Contact::getLastName(int i) {
	return (this->m_LastName);
}

void	Contact::setNickame(void) {
	std::cout << "Enter a Nickname" << std::endl;
	
	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else
			input = this->m_nickname;
	}
	
	return ;
}

std::string	Contact::getNickame(int i) {
	return (this->m_Nickname);
}

void	Contact::setPhone(void) {
	std::cout << "Enter a Phone Number" << std::endl;
	
	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else
			input = this->m_phone;
	}
	
	return ;
}

std::string	Contact::getPhone(int i) {
	return (this->m_phone);
}

void	Contact::setSecret(void) {
	std::cout << "Enter a Secret" << std::endl;
	
	std::string input;
	while (1) {
		std::getline(std::cin, input);
		std::istringstream buffer (input);
		buffer >> std::ws >> input;
		if (std::cin.eof())
			exit (0);
		else
			input = this->m_secret;
	}
	
	return ;
}

std::string	Contact::getSecret(int i) {
	return (this->m_secret);
}
