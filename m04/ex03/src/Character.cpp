/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:22:41 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/01 16:18:37 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Character.hpp"

Character::Character (void) : m_index = 0 {
	std::cout << GRN "Character Default" NC << std::endl;
}

Character::Character (const Character& other) {
	*this = other;
}

Character&	Character::operator= (const Character& rhs) {
	if (this == &rhs)
		return (*this);
	m_name = rhs.m_name;
	return (*this);
}

Character::~Character (void) {
	std::cout << RED "Character left" NC << std::endl;
}

std::string const & Character::getName() const {
	return (m_name);
}

void Character::equip(AMateria* m) {
	for (int slot = 0; slot < 4; slot++) {
		if (m_inventory[slot] == NULL) {
			m_inventory[slot] = m;
			std::cout << GRN "Materia added to inventory at spot #" << m_index << NC << std::endl;
			++m_index;
			return ;
		}
	}
	std::cout << MAG "Inventory full" NC << std::endl;
	return ;
}

void Character::unequip(int idx) {
	if (checkInventoryEmpty() == 0)
		std::cout << MAG "Inventory is empty" NC << std::endl;
	else {
		m_inventory[idx] = NULL;
		std::cout << GRN "Materia unequipped from spot #" << idx << NC << std::endl;
		--m_index;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (m_inventory[idx] == NULL) {
		std::cout << RED "Inventory slot is empty" NC << std::endl;
		return ;
	} else {
		m_inventory[idx].use(target);
		m_inventory[idx] = NULL;
		m_index--;
		return ;
	}
}

int	Character::checkInventoryEmpty (void) const {
	if (m_index == 0)
		return (0);
	else
		return (1);
}