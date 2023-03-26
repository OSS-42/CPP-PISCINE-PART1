/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:51:44 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/25 23:49:39 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <cctype>

class Contact {
	
public:

	// Constructor & destructor
	Contact(void);
	~Contact(void);
	
	// Accessors - Setters
	void	setFirstName(void);
	void	setLastName(void);
	void	setSurName(void);
	void	setPhone(void);
	void	setSecret(void);
	
	// Accessors - Getters
	std::string	getFirstName(void);
	std::string	getLastName(void)
	std::string	getSurName(void);
	std::string	getPhone(void);
	std::string	getSecret(void);

private:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickame;
	std::string	m_phone;
	std::string	m_secret;
};

#endif