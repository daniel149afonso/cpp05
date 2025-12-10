/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:45 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/08 20:35:03 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void	invalid_grade()
{
	std::cout << "\n\n### TESTING INVALID GRADE ###\n\n" << std::endl;
	try {
		Bureaucrat slave1("Daniel", 0);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: "<< e.what() << std::endl;
	}
	try {
		Bureaucrat slave1("Daniel", 151);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: "<< e.what() << std::endl;
	}
}

void	invalid_decrementation()
{
	std::cout << "\n\n### TESTING INVALID DECREMENTATION ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	try {
		Bureaucrat slave1("Sasuke", 50);
		slave1.decrement_grade(200);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: "<< e.what() << std::endl;
	}
}

void	invalid_incrementation()
{
	std::cout << "\n\n### TESTING INVALID INCREMENTATION ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	try {
		Bureaucrat slave1("Naruto", 50);
		slave1.increment_grade(200);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: "<< e.what() << std::endl;
	}
}

int	main()
{
	invalid_grade();
	invalid_decrementation();
	invalid_incrementation();
	return (0);
}