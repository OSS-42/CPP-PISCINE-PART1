/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/26 13:36:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"

// -------------- CANNON -----------------
Cat::Cat (void) {
	std::cout << MAG "Cat default" NC << std::endl;
	return ;
}

Cat::Cat (std::string type) : Animal(type) {
	std::cout << GRN "Cat is of type " << m_type << std::endl;
	return ;
}

Cat::Cat (const Cat& other) {
	*this = other ;
	return ;
}

Cat& Cat::operator= (Cat const& rhs) {
	this->m_type = rhs.m_type;
	return  *this;
}

Cat::~Cat (void) {
	std::cout << "Cat has disappeared" << std::endl;
	return ;
}