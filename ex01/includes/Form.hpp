/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:23 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/10 14:14:34 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

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
		class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
};


