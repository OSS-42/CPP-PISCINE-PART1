/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:16 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/24 10:52:26 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../inc/Animal.hpp"

class Dog : public Animal {
	public :
		Dog (void);
		Dog (std::string type);
		Dog (const Dog& other);
		~Dog (void);

		Dog& operator=(Dog const& rhs);

	protected :

	private :
};

#endif