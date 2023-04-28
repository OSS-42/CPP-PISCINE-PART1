/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 13:37:13 by ewurstei         ###   ########.fr       */
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
	const Animal*	j = new Dog();
	const Animal*	k = new Cat();

	delete	j;
	delete	k;
	cout << endl;
	cout << "Creation Cats x5 & Dogs x5\n" << endl;
	Animal*	Zoo[10];
	for (int i = 0; i < 5; i++) {
		Zoo[i] = new Dog();
	}
	for (int i = 5; i < 10; i++) {
		Zoo[i] = new Cat();
	}

	for (int i = 0; i < 10; i++) {
		delete Zoo[i];
	}

	return 0;
}

// Shallow vs Deep Copy
// Normal copy is shallow :
// Cat1 will have Brain1
// if Cat2 = Cat1, they will share the same Brain1
// when deleting, Cat1 and Brain1 will be deleted,
// but when deleting Cat2, you will have a double free
// warning as Brain1 is no longer.
// So Cat1-Brain1 and Cat2-Brain2 is deep copy.
// to do that in operator overload :
// delete the previous Brain, 
// Brain = new Brain(other.Brain)
// and in copy constructor, this = other.