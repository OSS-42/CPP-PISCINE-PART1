/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/24 10:47:20 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"

// --------------- CANNON -----------------
Animal::Animal (void) {
	std::cout << MAG "default constructor Animal" NC << std::endl;
	return ;
}

Animal::Animal (std::string type) : m_type(type) {
	std::cout << GRN "parametric constructor Animal of type " NC << m_type << std::endl;
	return ;
}

Animal::Animal (const Animal& other) {
	std::cout << YEL "copy constructor Animal" NC << std::endl;
	*this = other;
	return ;
}

Animal& Animal::operator= (const Animal& rhs) {
	m_type = rhs.m_type;
	return *this;
}

Animal::~Animal (void) {
	std::cout << RED "destructor Animal" NC <<std::endl;
	return ;
}

std::string Animal::getType (void) const {
	return (m_type);
}

void	Animal::makeSound(void) {
	if (m_type == "Cat")
		std::cout << "Miaou" << std::endl;
	else if (m_type == "Dog")
		std::cout << "Ouaf" << std::endl;
	else
		std::cout << "il n'y a pas un bruit" << std::endl;
}