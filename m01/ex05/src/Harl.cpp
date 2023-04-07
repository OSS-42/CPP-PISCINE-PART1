/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/07 11:38:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harl has been activated." << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Harl has been deactivated." << std::endl;
}

void complain(std::string level) {
	
}

void	debug(void) {
	std::cout << YEL "I love having extra bacon for my"
		" 7XL-double-cheese-triple-pickle-special-ketchup burger."
		" I really do !" NC << std::endl;
	return ;
}

void	info(void) {
	std::cout << CYN "I cannot believe adding extra bacon costs more money."
		" You didn\'t put enough bacon in my burger !"
		" If you did, I wouldn\'t be asking for more !" NC << std::endl;
	return ;
}

void	warning(void) {
	std::cout << MAG "I think I deserve to have some extra bacon for free."
		"I\'ve been coming for years whereas you started working here since last month." NC << std::endl;
	return ;
}

void	error(void) {
	std::cout << RED "This is unacceptable !";
	std::cout << " I want to speak to the manager now." NC << std::endl;
	return ;
}
