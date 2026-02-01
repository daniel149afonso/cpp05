/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:45 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/01 16:05:11 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
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
	AForm* rrf = NULL;
	try {
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Simpsons");
		if (rrf)
		{
			slave1.signForm(*rrf);
			slave1.executeForm(*rrf);
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< rrf->get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	if (rrf)
		delete rrf;
}

void	execution_robotomy()
{
	std::cout << "\n\n### TESTING RobotomyRequestForm EXECUTION GRADE ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 2);
	AForm* rrf = NULL;
	try {
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			slave1.signForm(*rrf);
			slave1.executeForm(*rrf);
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< rrf->get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	if (rrf)
		delete rrf;
}

void	execution_president()
{
	std::cout << "\n\n### TESTING PresidentialPardonForm EXECUTION GRADE###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 2);
	AForm* rrf = NULL;
	try {
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("presidential pardon", "Scoobydoo");
		if (rrf)
		{
			slave1.signForm(*rrf);
			slave1.executeForm(*rrf);
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< rrf->get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete rrf;
}

void invalid_name()
{
	std::cout << "\n\n### TESTING PresidentialPardonForm INVALID NAME ###\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat slave1("Daniel", 4);
	AForm* rrf = NULL;
	try {
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("I hate my boss", "Scoobydoo");
		if (rrf)
		{
			slave1.signForm(*rrf);
			slave1.executeForm(*rrf);
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Bureaucrat " << slave1.getName()
		<< " couldn’t execute "<< rrf->get_name() << " because "<< e.what() << std::endl;
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	if (rrf)
		delete rrf;
}

int	main()
{
	srand(time(NULL));
	
	execution_shrubberry();
	execution_robotomy();
	execution_president();
	invalid_name();
	return (0);
}