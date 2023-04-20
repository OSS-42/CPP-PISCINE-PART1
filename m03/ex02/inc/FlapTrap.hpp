/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:16 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/20 13:35:33 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAPTRAP_HPP
# define FLAPTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define REDB "\e[41m"

// Class
class FlapTrap : public ClapTrap {
	public :
		FlapTrap (void); 						// default constructor
		FlapTrap (std::string name);			// constructor
		FlapTrap (const FlapTrap& src);			//copy
		~FlapTrap (void);						//destructor

		FlapTrap& operator=(FlapTrap const& other);

		void	highFivesGuys();
};

#endif