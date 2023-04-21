/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:06 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 11:41:29 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FlapTrap.hpp"


// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define REDB "\e[41m"

// Class
class DiamondTrap : public ScavTrap, public FlapTrap {
	public :
		DiamondTrap (void); 						// default constructor
		DiamondTrap (std::string name);			// constructor
		DiamondTrap (const DiamondTrap& src);			//copy
		~DiamondTrap (void);						//destructor

		DiamondTrap& operator=(DiamondTrap const& other);
		using ScavTrap::attack;

		void	whoAmI();

	private :
		std::string	m_name;
};

#endif