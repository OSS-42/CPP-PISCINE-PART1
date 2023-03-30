/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 15:45:04 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name) {	
	std::cout << this->m_name << " salut son adversaire aussi." << std::endl;
}

HumanB::HumanB(void) {
	std::cout << "Un adversaire est apparu." << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << this->m_name << " has been killed" << std::endl;
}

void	HumanB::attack(void) const {
	// <name> attacks with their <weapon type>
	std::cout << this->getName() << " attack with their " << this->getWeapon() << std::endl;
}

std::string		HumanB::getName(void) const {
	return (this->m_name);
}

Weapon		HumanB::getWeapon(void) const {
	return (this->m_type);
}

void	HumanB::setName(std::string name) {
	this->m_name = name;
}

void	HumanB::setWeapon(Weapon newType) {
	this->m_type = newType;
}