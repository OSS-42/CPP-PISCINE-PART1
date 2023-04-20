/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/20 13:44:19 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/FlapTrap.hpp"
# include "../inc/ClapTrap.hpp"

// -------------- CANNON -----------------
// default 
FlapTrap::FlapTrap (void) {
	m_name = "default";
	m_HP = 100;
	m_MP = 100;
	m_AD = 30; 
	std::cout << CYN "FlapTrap " << m_name << " appears." << std::endl;
	return ;
}

// constructor
FlapTrap::FlapTrap (std::string name) {
	m_name = name;
	m_HP = 100;
	m_MP = 100;
	m_AD = 30;
	std::cout << CYN "FlapTrap " << m_name << " appears." << std::endl;
	return ;
}

// copy
FlapTrap::FlapTrap (const FlapTrap& src) {
	std::cout << MAG "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

// destructor
FlapTrap::~FlapTrap (void) { 
	std::cout << RED "FlapTrap " << m_name << " left." NC << std::endl;
	return ;
}

FlapTrap& FlapTrap::operator=(FlapTrap const& other) {
	this->m_name = other.m_name;
	this->m_HP = other.m_HP;
	this->m_MP = other.m_MP;
	this->m_AD = other.m_AD;
	return *this;
}

// getter

// setter



// ------------ MEMBER FUNCTIONS -------------
void	FlapTrap::highFivesGuys() {
	std::cout << "FlapTRAP" << m_name << " is looking for a High Five " << std::endl;
	return ;
}