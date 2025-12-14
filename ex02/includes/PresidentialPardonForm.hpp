/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:08:10 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/14 21:30:24 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
};

#endif