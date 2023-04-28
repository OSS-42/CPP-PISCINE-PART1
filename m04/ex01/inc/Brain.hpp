/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:05:57 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 14:32:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "../inc/Animal.hpp"

class Brain {
	public :
		Brain (void);
		Brain (Brain& other);
		~Brain (void);
	
	protected :
		std::string ideas[100];

	private :

	Brain& operator= (Brain& rhs);
};

#endif