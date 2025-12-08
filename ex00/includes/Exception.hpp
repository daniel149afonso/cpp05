/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:50:59 by daniel149af       #+#    #+#             */
/*   Updated: 2025/12/08 01:37:15 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>


class Exception: public std::exception{
	const char * what() const throw(){
		return ("grade is too low");
	}
};
