/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:00:33 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/14 22:47:16 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 145, 137), _target("unknown")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): 
	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	AForm(other)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		//Copy only non-const attributes
		_signed = true;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called"<<std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > _gradeExecuted)
		throw GradeTooLowException();
	if (_signed == false)
		throw FormNotSigned();
	std::ofstream file1;
	file1.open((_target + "_shrubbery").c_str());
	if (!file1)
		return ;
	file1 <<
	"      /\\\n"
	"     /**\\\n"
	"    /****\\\n"
	"   /******\\\n"
	"      ||\n"
	"      ||\n";
	file1.close();
	std::cout << "Bureaucrat " << executor.getName() << " executed " << "form " << _name<<std::endl;
}
