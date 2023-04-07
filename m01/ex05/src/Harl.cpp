/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/07 11:14:42 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Harl.hpp"

Harl::Harl(complain(std::string level)){
	std::cout << "Harl has been activated." << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Harl has been deactivated." << std::endl;
}

void complain(std::string level) {
	
}

void	debug(void) {
	std::cout << "DEBUG" << std::endl;
}

void	info(void) {
	std::cout << "INFO" << std::endl;
}

void	warning(void) {
	std::cout << "WARNING" << std::endl;
}

void	error(void) {
	std::cout << "ERROR" << std::endl;
}
