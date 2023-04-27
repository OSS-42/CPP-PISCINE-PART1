/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:05:57 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 11:23:46 by ewurstei         ###   ########.fr       */
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

	private :

	Brain& operator= (Brain const& rhs);
};