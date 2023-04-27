/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:05:57 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 16:51:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Animal.hpp"

class Brain {
	public :
		Brain (void);
		Brain (std::string ideas);
		Brain (const Brain& other);
		~Brain (void);
	
	protected :
		std::string ideas[100];

	private :

	Brain& operator= (Brain const& rhs);
};