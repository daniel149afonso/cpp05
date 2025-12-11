/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/10 19:51:14 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; //previous declaration

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSigned;
		const int _gradeExecuted;
	public:
		Form();
		Form(const std::string name, const int gradeS, const int gradeE);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		//getters setters
		const std::string get_name()const;
		bool get_signed()const;
		int get_gradeSigned()const;
		int get_gradeExecuted()const;

		//public methods
		void beSigned(const Bureaucrat& n);

		//Exceptions
		class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
};

#endif