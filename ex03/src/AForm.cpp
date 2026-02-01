/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:03 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/11 22:33:44 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm():
	_name("unknown"), _signed(false), _gradeSigned(150), _gradeExecuted(150)
{
	std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeS, const int gradeE): 
	_name(name),  _signed(false), _gradeSigned(gradeS), _gradeExecuted(gradeE)
{
	if (gradeS > 150 ||  gradeS > 150 )
		throw GradeTooLowException();
	else if (gradeS < 1 || gradeS < 1)
		throw GradeTooHighException();
	std::cout << "AForm Constructor called" << std::endl;
}

AForm::AForm(const AForm& other):
	_name(other._name),  _signed(false), _gradeSigned(other._gradeSigned), _gradeExecuted(other._gradeExecuted)
{

	std::cout << "AForm Copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		//Copy only non-const attributes
		_signed = true;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called"<<std::endl;
}

//Getters
const std::string AForm::get_name()const
{
	return _name;
}

bool AForm::get_signed()const
{
	return _signed;
}

int AForm::get_gradeSigned()const
{
	return _gradeSigned;
}

int AForm::get_gradeExecuted()const
{
	return _gradeExecuted;
}

//Public method
void AForm::beSigned(const Bureaucrat& n)
{
	if (n.getGrade() <= _gradeSigned)
	{
		_signed = true;
		std::cout << "Bureaucrat " << n.getName() << " signed form "<< _name << "\n";
	}
	else 
		throw GradeTooLowException();
}

//Exceptions
const char* AForm::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("form is not signed");
}