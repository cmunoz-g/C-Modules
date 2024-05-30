/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camunozg <camunozg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 09:39:43 by camunozg          #+#    #+#             */
/*   Updated: 2024/05/29 09:39:44 by camunozg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	reset(void)
{
	system("clear");
	std::cout << RED << "\n📞 PhoneBook! 📞\n" << RESET;
}

int	main() {
	PhoneBook 	pb;
	std::string line;

	std::cout << RED << "\n📞 Welcome to your PhoneBook! 📞\n" << RESET;
	while (1) {
		std::cout << "\n🙋 ADD      🔎 SEARCH      🚪 EXIT\n";
		std::cin >> line;
		if (line == "ADD") {
			reset();
			pb.add();
			reset();
		}
		else if (line == "SEARCH") {
			reset();
			pb.search();
		}
		else if (line == "EXIT")
		{
			system("clear");
			break ;
		}
		else
			std::cout << "Enter a valid input!\n\n";
	}
	std::cout << "\n\n📞 Thank you! 📞\n\n";
	return (0);
}