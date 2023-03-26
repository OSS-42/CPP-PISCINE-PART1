/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:52:29 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/25 18:56:42 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "/Contact.Class.hpp"

class Phonebook {
	
public:

	// Constructor & Destructor
	Phonebook(void);
	~Phonebook(void);
	
	// Accessor - Getters
	Contact getContact(int i);
	int		getIndex(void);

	// Accessor - Setters
	void	addContact(void);
	void	setIndex(void);
	
	// Database Visual Representation
	void	showDatabase(void);

private:

	int		m_index;
	Contact	m_directory[8];
};

#endif