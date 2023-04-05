/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/05 14:18:27 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Sed.hpp"

void	createFiles(char **argv) {
	
	std::string	filename1 = argv[1];
	std::string	extension = ".replace";
	std::string	origineStr = argv[2];
	std::string	replaceStr = argv[3];
	
	// create fichier originel et copy str1 dedans
	// std::string filename = str1.append(str2);
	std::fstream outfile1 (filename1);
	outfile1 << origineStr << std::endl;
	outfile1.close();
	
	// create fichier .replace
	std::string filename = filename1 + extension;
	std::fstream outfile2 (filename);
	outfile2.close();
	
	// copy and change origineStr avec replaceStr dans fichier.replace
	std::fstream readOriginal;
	readOriginal.open(filename1, std::ios::in);
	
}


int main(int argc, char **argv) {
	if (argc != 3 || !argv[1] || !argv[2] || !argv[3]) {
		std::cout << "Bad arguments. Retry" << std::endl;
		return 0;
	}
	else {
		createFiles(argv);
	}
	return 0;
}
