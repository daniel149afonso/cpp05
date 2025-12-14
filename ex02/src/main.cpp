/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:45 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/14 20:50:35 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

void	execution_shrubberry()
{
	std::cout << "\n\n### TESTING ShrubberyCreationForm EXECUTION GRADE ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 2);
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

void	execution_robotomy()
{
	std::cout << "\n\n### TESTING RobotomyRequestForm EXECUTION GRADE ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 2);
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

void	execution_president()
{
	std::cout << "\n\n### TESTING PresidentialPardonForm EXECUTION ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 2);
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
	srand(time(NULL));
	execution_shrubberry();
	execution_robotomy();
	execution_president();
	invalid_execution_notSigned();
	return (0);
}