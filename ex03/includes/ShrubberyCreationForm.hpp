/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:00:51 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/14 21:30:45 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;

};

#endif