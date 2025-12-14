/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:51:03 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/14 22:47:47 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
	AForm("PresidentialPardonForm", 25, 5), _target("unknown")
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): 
	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	AForm(other)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		//Copy only non-const attributes
		_signed = true;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called"<<std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > _gradeExecuted)
		throw GradeTooLowException();
	if (_signed == false)
		throw FormNotSigned();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
	std::cout << "Bureaucrat " << executor.getName() << " executed " << "form " << _name<<std::endl;
}