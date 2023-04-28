/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:06:10 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 14:32:20 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Brain.hpp"

Brain::Brain (void) {
	std::cout << MAG "Default Brain" NC << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = "Ideas #" + std::to_string(i);
	}
}

Brain::Brain (Brain& other) {
	*this = other;
	return ;
}

Brain& Brain::operator= (Brain& rhs) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain (void) {
	std::cout << RED "Brain is dead" NC << std::endl;
}