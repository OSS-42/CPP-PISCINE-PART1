/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/03 14:12:07 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

// COLOURS CODES
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

//Class
class Weapon {
		public :

		// mandatory
			Weapon(std::string type); 	// Constructeur
			~Weapon(void);				// Destructor

		// accessor - getter
			const std::string&		getType(void) const;

		// accessor - setter
			void	setType(std::string newType);

		private :
			std::string m_type;
};

#endif