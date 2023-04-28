/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 17:05:04 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"

// -------------- CANNON -----------------
Cat::Cat (void) : Animal("default chat") {
	std::cout << MAG "Default Cat" NC << std::endl;
	m_catBrain = new Brain();
	return ;
}

Cat::Cat (std::string type) : Animal(type) {
	std::cout << GRN "Cat is of type " << m_type << std::endl;
	m_catBrain = new Brain();
	return ;
}

Cat::Cat (const Cat& other) : Animal(other), m_catBrain(new Brain(*other.m_catBrain)) {
	*this = other;
	return ;
}

Cat& Cat::operator= (const Cat& rhs) {
	if (this == &rhs)
		return *this;
	*this->m_catBrain = *rhs.m_catBrain;
	return  *this;
}

Cat::~Cat (void) {
	std::cout << RED "Cat has disappeared" NC << std::endl;
	delete m_catBrain;
	return ;
}

void	Cat::getBrain(void) const {
	std::cout << &this->m_catBrain << std::endl;
	return ;
}

void Cat::makeSound (void) const {
	std::cout << "MEaaaooow" << std::endl;
}