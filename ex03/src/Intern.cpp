/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielafonso <danielafonso@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:25:05 by danielafons       #+#    #+#             */
/*   Updated: 2026/02/01 16:06:59 by danielafons      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called"<<std::endl;
}

Intern::Intern(const Intern& other)
{
    (void)other;
	std::cout << "Intern Copy Constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
	std::cout << "Intern Copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called"<<std::endl;
}

AForm* Intern::makeForm(const std::string name, const std::string target)
{
    std::string names[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };

    AForm* (Intern::*fptr[3])(const std::string target) = {
        &Intern::makeRobotomy,
        &Intern::makeShrubbery,
        &Intern::makePresidential
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (name == names[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return ((this->*fptr[i])(target));
        }
    }
    std::cout << "Intern can't creates " << name << std::endl;
    return (NULL);
}

AForm* Intern::makeShrubbery(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidential(const std::string target)
{
    return (new PresidentialPardonForm(target));
}
