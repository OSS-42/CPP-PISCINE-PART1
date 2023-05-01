/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 09:55:46 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/01 11:40:54 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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