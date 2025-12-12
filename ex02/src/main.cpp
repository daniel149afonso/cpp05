/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:45 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/12 14:58:17 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

// void	invalid_signature()
// {
// 	std::cout << "\n\n### TESTING INVALID SIGNATURE GRADE TOO SLOW ###\n\n" << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	Bureaucrat slave1("Daniel", 150);
// 	ShrubberyCreationForm form1("form1");
// 	try {
// 		slave1.signForm(form1);
// 		slave1.executeForm(form1);
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << "Bureaucrat " << slave1.getName()
// 		<< " couldn’t sign "<< form1.get_name() << " because "<< e.what() << std::endl;
// 	}
// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// }

void	invalid_execution_shrubberry()
{
	std::cout << "\n\n### TESTING ShrubberyCreationForm INVALID EXECUTION GRADE TOO SLOW ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
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
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

void	invalid_execution_robotomy()
{
	std::cout << "\n\n### TESTING RobotomyRequestForm INVALID EXECUTION GRADE TOO SLOW ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 72);
	RobotomyRequestForm form1("form1");
	try {
		slave1.signForm(form1);
		slave1.executeForm(form1);
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< form1.get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

void	invalid_execution_president()
{
	std::cout << "\n\n### TESTING PresidentialPardonForm INVALID EXECUTION GRADE TOO SLOW ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 25);
	PresidentialPardonForm form1("form1");
	try {
		slave1.signForm(form1);
		slave1.executeForm(form1);
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< form1.get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

void invalid_execution_notSigned()
{
	std::cout << "\n\n### TESTING PresidentialPardonForm INVALID EXECUTION NOT SIGNED ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 4);
	PresidentialPardonForm form1("form1");
	try {
		slave1.executeForm(form1);
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< form1.get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

int	main()
{
	invalid_execution_shrubberry();
	invalid_execution_robotomy();
	invalid_execution_president();
	invalid_execution_notSigned();
	return (0);
}