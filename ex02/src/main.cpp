/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:45 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/11 22:34:04 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

void	invalid_signature()
{
	std::cout << "\n\n### TESTING INVALID SIGNATURE GRADE TOO SLOW ###\n\n" << std::endl;
	Bureaucrat slave1("Daniel", 150);
	ShrubberyCreationForm form1("form1");
	try {
		slave1.signForm(form1);
		slave1.executeForm(form1);
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t sign "<< form1.get_name() << " because "<< e.what() << std::endl;
	}
}

void	invalid_execution()
{
	std::cout << "\n\n### TESTING INVALID SIGNATURE GRADE TOO SLOW ###\n\n" << std::endl;
	Bureaucrat slave1("Daniel", 145);
	ShrubberyCreationForm form1("form1");
	try {
		slave1.signForm(form1);
		slave1.executeForm(form1);
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< form1.get_name() << " because "<< e.what() << std::endl;
	}
}

// void	valid_signature()
// {
	
// }

int	main()
{
	invalid_signature();
	invalid_execution();
	return (0);
}