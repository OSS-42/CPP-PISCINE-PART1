/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:59:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 18:04:27 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include <string>

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define REDB "\e[41m"

class AMateria {
	protected:

	public :
		AMateria ();
		AMateria (std::string cont& type);
		AMateria (const AMateria& other);
		operator= (const AMateria& rhs);
		~AMateria ();

		std::string const& getType() const; //Returns the materia type
		
		virtual AMateria* clone () const = 0;
		virutal void use(ICharacter& target);
}

#endif