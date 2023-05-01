/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 09:55:46 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/01 14:54:17 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "../inc/Materia.hpp"
# include "../inc/MateriaSource.hpp"
# include "../inc/Character.hpp"

class Cure : public AMateria {
	public :
		Cure (void);
		Cure (const Cure& other);
		Cure& operator= (const Cure& rhs);
		~Cure (void);
	
		Cure* clone () const;
		void use(ICharacter& target);
		
	protected :

	private :
};

#endif;