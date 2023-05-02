/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:12:00 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/01 14:12:06 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "../inc/Materia.hpp"
# include "../inc/MateriaSource.hpp"
# include "../inc/Character.hpp"

class Ice : public AMateria {
	public :
		Ice (void);
		Ice (const Ice& other);
		Ice& operator= (const Ice& rhs);
		virtual ~Ice (void);
	
		Ice* clone () const;
		void use(ICharacter& target);
		
	protected :

	private :
};

#endif