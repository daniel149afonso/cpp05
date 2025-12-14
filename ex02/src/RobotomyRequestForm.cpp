/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:02:29 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/14 22:52:48 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 45), _target("unknown")
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): 
	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
	AForm(other)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		//Copy only non-const attributes
		_signed = true;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called"<<std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > _gradeExecuted)
		throw GradeTooLowException();
	if (_signed == false)
		throw FormNotSigned();
	std::cout << "* DRRRRRRRRRR *" << std::endl;
	int rnd = rand();
	if (rnd % 2 == 0)
		std::cout << _target << " has been robotomized successfully\n";
	else
		std::cout << _target << " robotomy failed" << std::endl;
	std::cout << "Bureaucrat " << executor.getName() << " executed " << "form " << _name<<std::endl;
}