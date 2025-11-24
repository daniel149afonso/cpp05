/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:05:42 by daniel149af       #+#    #+#             */
/*   Updated: 2025/11/24 22:10:45 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
};

