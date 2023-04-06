/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/06 16:46:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Sed.hpp"

void	createFiles(char **argv) {

	// Opening source file and check
	std::string	filename1 = argv[1];
	
	std::ifstream inFile;
	inFile.open(filename1);
	if (inFile.is_open() == false) {
		std::cout << "error: cannot open file: " << filename1 << std::endl;
		inFile.close();
		return ;
	}

	// create fichier .replace and check
	// std::string filename = str1.append(str2);
	std::string	extension = ".replace";
	std::string filename = filename1 + extension;

	std::ofstream outFile;
	outFile.open(filename);
	if (outFile.is_open() == false) {
		std::cout << "error: cannot open file: " << filename << std::endl;
		outFile.close();
		return ;
	}
	
	// find and replace strings in out file
	std::string	origineStr = argv[2];
	std::string	replaceStr = argv[3];
	std::string	line;
	size_t	position;
	
	while (std::getline(inFile, line)) {
		position = line.find(origineStr);
		if (position != line.npos) {
			outFile << line.substr(0, position);
			outFile << replaceStr;
			line.erase(0, position + origineStr.length());
		}
		outFile << line << "\n";
	}
	return ;


	// int	position;
	
	// std::getline(inFile, line);
	// while ((position = line.find((std::string)argv[2])) != -1) {
	// 	position = line.find(origineStr);
	// 	while (position != -1) {
	// 		newline = line.substr(0, position);
	// 		outFile << newline;
	// 		outFile << replaceStr;
	// 		line.erase(0, position + origineStr.length());
	// 	}
	// 	outFile << line << "\n";
	// 	std::getline(inFile, line);
	// }
	// return ;
}


int main(int argc, char **argv) {
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3]) {
		std::cout << "Bad arguments. Retry" << std::endl;
		return 1;
	}
	else {
		createFiles(argv);
	}
	return 0;
}
