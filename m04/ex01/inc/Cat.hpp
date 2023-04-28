/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:06 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 13:37:46 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Animal.hpp"
# include "../inc/Brain.hpp"

class Cat : public Animal {
	public:
		Cat (void) ;
		Cat (std::string name);
		Cat (const Cat& other);
		~Cat (void);

		Cat& operator=(const Cat& rhs);

		void makeSound (void) const;

	protected :

	private :
		Brain* m_catIdea;
};

#endif