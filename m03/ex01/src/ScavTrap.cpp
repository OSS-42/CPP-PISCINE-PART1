/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:42:34 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/19 20:39:42 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ScavTrap.hpp"

// -------------- CANNON -----------------
// default 
ScavTrap::ScavTrap (void) : m_name ("default"), m_HP(100), m_MP(50), m_AD(20) {
	std::cout << CYN "ScavTrap " << m_name << " is in da House." << std::endl;
	return ;
}

// constructor
ScavTrap::ScavTrap (std::string name) : m_name (name), m_HP(100), m_MP(50), m_AD(20) {
	std::cout << CYN "ScavTrap " << m_name << " is in da House." << std::endl;
	return ;
}

// copy
ScavTrap::ScavTrap (const ScavTrap& src) {
	std::cout << MAG "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

// destructor
ScavTrap::~ScavTrap (void) { 
	std::cout << RED "ScavTrap " << m_name << " has been destroyed" NC << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other) {
	this->m_name = other.m_name;
	this->m_HP = other.m_HP;
	this->m_MP = other.m_MP;
	this->m_AD = other.m_AD;
	return *this;
}

// getter

// setter



// ------------ MEMBER FUNCTIONS -------------
void	ScavTrap::guardGate() {
	std::cout << "SCAVTRAP INTO " << RED "GATEKEEPER" NC << "MODE" << std::endl;
	return ;
}