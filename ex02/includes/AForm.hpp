/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/11 16:17:16 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; //previous declaration

class AForm
{
	protected:
		const std::string _name;
		bool _signed;
		const int _gradeSigned;
		const int _gradeExecuted;
	public:
		AForm();
		AForm(const std::string name, const int gradeS, const int gradeE);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		//getters setters
		const std::string get_name()const;
		bool get_signed()const;
		int get_gradeSigned()const;
		int get_gradeExecuted()const;

		//public methods
		virtual void beSigned(const Bureaucrat& n);

		//Exceptions
		class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
};

#endif