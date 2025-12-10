/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:03 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/10 14:05:29 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form():
	_name("unknown"), _signed(false), _gradeSigned(150), _gradeExecuted(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradeS, const int gradeE): 
	_name(name),  _signed(true), _gradeSigned(gradeS), _gradeExecuted(gradeE)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form& other):
	_name(other._name),  _signed(true), _gradeSigned(other._gradeSigned), _gradeExecuted(other._gradeExecuted)
{

	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		//Copy only non-const attributes
		_signed = true;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called"<<std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}