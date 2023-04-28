/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 14:27:27 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"

// -------------- CANNON -----------------
Cat::Cat (void) : Animal("default chat") {
	std::cout << MAG "Cat default, no brain" NC << std::endl;
	return ;
}

Cat::Cat (std::string type) : Animal(type) {
	std::cout << GRN "Cat is of type " << m_type << std::endl;
	m_catIdea = new Brain();
	return ;
}

Cat::Cat (const Cat& other) {
	*this = other ;
	return ;
}

Cat& Cat::operator= (const Cat& rhs) {
	delete m_catIdea;
	this->m_catIdea = new Brain(*rhs.m_catIdea);
	this->m_type = rhs.m_type;
	return  *this;
}

Cat::~Cat (void) {
	std::cout << RED "Cat has disappeared" NC << std::endl;
	delete m_catIdea;
	return ;
}

void Cat::makeSound (void) const {
	std::cout << "MEaaaooow" << std::endl;
}