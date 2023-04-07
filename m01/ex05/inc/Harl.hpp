/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/07 11:10:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include "../inc/Weapon.hpp"

//Class
class Harl {
		public :

		// mandatory
			Harl (void); 	// Constructeur
			~Harl(void);	// Destructor

		// accessor - getter
			std::string		getName(void) const;

		// accessor - setter
			void	setName(std::string name);

		// other
			void complain(std::string level);

		private :
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
};

#endif