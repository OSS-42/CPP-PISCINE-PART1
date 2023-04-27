/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:06:10 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 11:36:41 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Brain.hpp"

Brain::Brain (void) {
	std::cout << MAG "Default Brain" NC << std::endl;
}

Brain::Brain (std::string ideas) {
	std::cout << GRN "Active Brain Created" << std::endl;
	Brain* allIdeas = new Brain[100];


for(int i = 0; i < N; i++) {
			Horde[i].setName(name);
			Horde[i].announce();	
		}
		return (Horde);
}

Brain::Brain (const Brain& other) {
	*this = other;
	return ;
}

Brain& Brain::operator= (Brain const& rhs) {
	
}

Brain::~Brain (void) {
	std::cout << RED "Brain is dead" NC << std::endl;
}