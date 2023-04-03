/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/03 16:19:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name) {	
	std::cout << this->m_name << " salut son adversaire aussi." << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << this->m_name << " has been killed" << std::endl;
}

void	HumanB::attack(void) const {
	// <name> attacks with their <weapon type>
	if (this->m_type->getType().length() == 0)
		std::cout << this->getName() << " attack with their fists" << std::endl;
	else
		std::cout << this->getName() << " attack with their " << this->m_type->getType() << std::endl;
}

std::string		HumanB::getName(void) const {
	return (this->m_name);
}

void	HumanB::setName(std::string name) {
	this->m_name = name;
}

void	HumanB::setWeapon(Weapon &newType) {
	this->m_type = &newType;
}