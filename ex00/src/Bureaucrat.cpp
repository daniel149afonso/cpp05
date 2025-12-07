/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:42 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/07 14:42:16 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "unknown";
	_grade = 150;
	std::cout << "Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	try
	{
		_grade = grade;
		if (grade > 150)
			throw std::exception();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << "Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called"<<std::endl;
}

void Bureaucrat::increment_grade(const int number)
{
	try
	{
		_grade -= number;
		if (_grade < 1)
			throw "error";
	}
	catch(const std::string e)
	{
		std::cerr << "error" << '\n';
	}
	
}

// void decrement_grade(const int number)
// {
	
// }

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}