/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:42 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/05 16:33:03 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat():
	_name("unknown")
{
	_grade = 150;
	std::cout << "Bureaucrat Default Constructor called"<<std::endl;
	std::cout << (*this);
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
	_name(name), _grade(grade)
{

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	std::cout << "Bureaucrat Constructor called"<<std::endl;
	std::cout << (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):
	_name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;

	if (this != &other)
		_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called"<<std::endl;
}

void Bureaucrat::increment_grade(const int number)
{
		_grade -= number;
		if (_grade < 1)
			throw GradeTooHighException();
		std::cout << _name << " bureaucrat grade increments to "<< _grade << ".\n";
}

void Bureaucrat::decrement_grade(const int number)
{
	_grade += number;
		if (_grade > 150)
			throw GradeTooLowException();
		std::cout << _name << " bureaucrat grade decrements to "<< _grade << ".\n";
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

//Overloaded insertion operator
std::ostream& operator<<(std::ostream& out, Bureaucrat& n)
{
	out << n.getName() << ", bureaucrat grade " << n.getGrade() << ".\n";
	return (out);
}
