/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:02:39 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 13:18:54 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "address of string using string: "
	<< &string << std::endl;

	std::cout << "address of string using stringPTR: " 
	<< stringPTR << std::endl;

	std::cout << "address of string using stringREF: "
	<< &stringREF << std::endl;

	
	std::cout << "content of string using stringPTR: "
	<< *stringPTR << std::endl;

	std::cout << "content of string using stringREF: "
	<< stringREF << std::endl;
	
	return (0);
}