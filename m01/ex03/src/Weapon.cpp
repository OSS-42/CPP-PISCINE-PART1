/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:47:25 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 15:41:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Weapon.hpp"

Weapon::Weapon(void) {
	std::cout << "Une arme est apparue." << std::endl;
}

Weapon::Weapon(std::string type) {
	std::cout << "L'arme est :" << type << std::endl; 
}

void	Weapon::setType(std::string newType) {
	this->m_type = newType;
}

const std::string& Weapon::getType() const {
    return m_type;
}

Weapon::~Weapon(void) {
	std::cout << "L'arme est detruite" << std::endl;	
}
