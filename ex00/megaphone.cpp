/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:17:52 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/24 12:45:19 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main (int argc, char **argv)
{
	int	av;
	int	i;

	av = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++av])
	{
		std::string str (argv[av]);
		std::size_t size = str.size();
		i = -1;
		while (++i < (int)size)
		{
			if (str[i] >= 97 && str[i] <= 122 && str[i])
				str[i] -= 32;
		}
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
