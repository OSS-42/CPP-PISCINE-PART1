/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 09:45:25 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"
# include "../inc/Dog.hpp"

int	main(void) {

	std::cout << "Creation Meta, Dog puis Chat" << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	
	std::cout << MAG "Qui est Qui ?" NC << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << MAG "Qui dit Quoi ?" NC << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << "Suppression Meta, Dog puis Chat" << std::endl;
	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;

	return 0;
}