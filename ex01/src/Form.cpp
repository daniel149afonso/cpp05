/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:03 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/05 17:25:16 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form():
	_name("unknown"), _signed(false), _gradeSigned(150), _gradeExecuted(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradeS, const int gradeE):
	_name(name),  _signed(false), _gradeSigned(gradeS), _gradeExecuted(gradeE)
{
	if (gradeS > 150 ||  gradeS > 150 )
		throw GradeTooLowException();
	else if (gradeS < 1 || gradeS < 1)
		throw GradeTooHighException();
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form& other):
	_name(other._name),  _signed(false), _gradeSigned(other._gradeSigned), _gradeExecuted(other._gradeExecuted)
{

	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		//Copy only non-const attributes
		_signed = other.get_gradeSigned();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called"<<std::endl;
}

//Getters
const std::string Form::get_name()const
{
	return _name;
}

bool Form::get_signed()const
{
	return _signed;
}

int Form::get_gradeSigned()const
{
	return _gradeSigned;
}

int Form::get_gradeExecuted()const
{
	return _gradeExecuted;
}

//Public method
void Form::beSigned(const Bureaucrat& n)
{
	if (n.getGrade() <= _gradeSigned)
	{
		_signed = true;
		std::cout << "bureaucrat "<< n.getName() << " signed form "<< _name << "\n";
	}
	else
		throw GradeTooLowException();
}

//Exceptions
const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}
