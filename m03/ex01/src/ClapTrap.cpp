/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/19 20:32:22 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"

// --------------- CANNON -----------------
// default constructor
ClapTrap::ClapTrap (void) : m_name("default"), m_HP(10), m_MP(10), m_AD(0) {
	std::cout << CYN "ClapTrap " << m_name << " salut son adversaire" NC << std::endl;
	return ;
}

// constructor
ClapTrap::ClapTrap (std::string name) : m_name(name), m_HP(10), m_MP(10), m_AD(0) {
	std::cout << CYN "ClapTrap " << m_name << " salut son adversaire" NC << std::endl;
	return ;
}

// copy
ClapTrap::ClapTrap (ClapTrap const& src) {
	std::cout << MAG "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

// destructor
ClapTrap::~ClapTrap (void) {
	std::cout << RED "ClapTrap " << m_name << " has been killed." NC << std::endl;
	return ;
}

// operator overload
ClapTrap& ClapTrap::operator=(ClapTrap const& other) {
	this->m_name = other.m_name;
	this->m_HP = other.m_HP;
	this->m_MP = other.m_MP;
	this->m_AD = other.m_AD;
	return *this;
}

// getter
std::string ClapTrap::getName(void) const {
	return (this->m_name);
}

unsigned int ClapTrap::getHP(void) const {
	return (this->m_HP);
}

unsigned int ClapTrap::getMP(void) const {
	return (this->m_MP);
}

unsigned int ClapTrap::getAD(void) const {
	return (this->m_AD);
}

// setter
void ClapTrap::setName(std::string newName) {
	this->m_name = newName;
	return ;
}

void ClapTrap::setHP(unsigned int newHP) {
	this->m_HP = newHP;
	return ;
}

void ClapTrap::setMP(unsigned int newMP) {
	this->m_MP = newMP;
	return ;
}

void ClapTrap::setAD(unsigned int newAD) {
	this->m_AD = newAD;
	return ;
}

// --------------- MEMBER FUNCTIONS ---------------
void	ClapTrap::attack(const std::string& target) {
	if (this->getMP() == 0) {
		std::cout << "ClapTrap " << this->getName()
			<< " doesn't have Energy points anymore. Cannot attack\n" << std::endl;
		return ;
	} else if (this->getHP() == 0) {
		std::cout << "ClapTrap " << this->getName()
			<< " doesn't have Hits points anymore. ClapTrap is dead.\n"<< std::endl; 
		return ;
	}
	this->setMP(this->getMP() - 1);
	std::cout << YEL "ClapTrap " << this->getName() << " attacks " << target
		<< ", causing " << this->getAD() << " points of damage!" NC << std::endl;

	std::cout << "ClapTrap " << this->getName() << " has " << this->getMP()
		<< " Energy points left." << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int) amount < 0) {
		std::cout << "Bad argument. Retry" << std::endl;
		return ;
	}
	this->setHP(this->getHP() - amount);
	std::cout << MAG "ClapTrap " << this->getName() << " took " << amount
		<< " damages" NC << std::endl;

	std::cout << "ClapTrap " << this->getName() << " has " << this->getHP()
		<< " Hit points left." << std::endl;
}


void	ClapTrap::beRepaired(unsigned int amount) {
	if ((int) amount < 0) {
		std::cout << "Bad argument. Retry" << std::endl;
		return ;
	}
	if (this->getMP() == 0) {
		std::cout << "ClapTrap " << this->getName()
			<< " doesn't have Energy points anymore. Cannot attack\n" << std::endl;
		return ;
	} else if (this->getHP() == 0) {
		std::cout << "ClapTrap " << this->getName()
			<< " doesn't have Hits points anymore. ClapTrap is dead.\n"<< std::endl; 
		return ;
	}
	this->setHP(this->getHP() + amount);
	this->setMP(this->getMP() - 1);
	std::cout << GRN "ClapTrap " << this->getName() << " repaired itself back to "
		<< this->getHP() << " points." NC << std::endl;

	std::cout << "ClapTrap " << this->getName() << " has " << this->getMP()
		<< " Energy points left." << std::endl;
}