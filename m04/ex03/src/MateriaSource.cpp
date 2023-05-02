/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:00:01 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/02 16:13:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource (void) {
	std::cout << YEL "MSource default" NC << std::endl;
}

MateriaSource::MateriaSource (const MateriaSource& other) {
	*this = other;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

MateriaSource::~MateriaSource (void) {
	std::cout << RED "MSource phased out" NC << std::endl;
}

void learnMateria(AMateria*) {
	
}

AMateria* createMateria(std::string const & type) {
	
}