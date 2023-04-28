/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 17:37:05 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"
# include "../inc/Cat.hpp"
# include "../inc/Dog.hpp"
# include "../inc/WrongAnimal.hpp"
# include "../inc/WrongCat.hpp"

using	std::cout;
using	std::endl;

int	main(void) {
	cout << "Creation Cat & Dog\n" << endl;
	const AAnimal*	j = new Dog();
	const AAnimal*	k = new Cat();
	cout << endl;

	j->makeSound();
	k->makeSound();
	cout << endl;

	delete j;
	delete k; 

	return 0;
}
