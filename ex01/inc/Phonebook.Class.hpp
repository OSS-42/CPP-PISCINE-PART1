/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:52:29 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/26 17:12:08 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include <istream>
# include <sstream>
# include <string>
# include "Contact.Class.hpp"

# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

class Phonebook {
	
public:

	// Constructor & Destructor
	Phonebook(void);
	~Phonebook(void);
	
	// Accessor - Getters
	void	getContact(void);
	int		getIndex(void);

	// Accessor - Setters
	void	setContact(void);
	void	setIndex(int i);
	
	// Database Visual Representation
	void	showDatabase(void);

private:

	int		m_Index;
	Contact	m_Directory[8];
};

#endif