/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:42 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/08 02:46:43 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Exception.hpp"

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		//public methods
		void increment_grade(const int number);
		void decrement_grade(const int number);

		//getters setters
		std::string getName(void) const;
		int getGrade(void) const;
		
		class GradeTooHighException : public std::exception {
			const char * what() const throw(){
				return ("grade is too high");
			}
		};

		class GradeTooLowException : public std::exception {
			const char * what() const throw(){
				return ("grade is too low");
			}
		};
};

