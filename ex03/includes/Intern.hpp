/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:43:23 by daniel149af       #+#    #+#             */
/*   Updated: 2026/02/01 15:58:29 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; //previous declaration

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();
		
		//public methods
		AForm* makeForm(const std::string name, const std::string target);
		AForm* makeShrubbery(const std::string target);
        AForm* makeRobotomy(const std::string target);
        AForm* makePresidential(const std::string target);
};

#endif