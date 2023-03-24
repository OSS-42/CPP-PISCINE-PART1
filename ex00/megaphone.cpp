/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:17:52 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/24 11:01:30 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main (int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc > 2)
	{
		std::cout << "usage : ./megaphone \"your message\"" << std::endl;
		return (0);
	}
	else if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string str (argv[1]);
	std::size_t size = str.size();
	while (++i < (int)size)
	{
		if (str[i] >= 97 && str[i] <= 122 && str[i])
			str[i] -= 32;
	}
	std::cout << str << std::endl;
	return (0);
}