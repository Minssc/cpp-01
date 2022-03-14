/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:12:12 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 16:58:45 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}

void	Karen::complain(std::string level)
{
	int	lvl;
	void (Karen::*f[])(void) = {
		&Karen::nothin, &Karen::debug, &Karen::info, &Karen::warning, &Karen::error
		};
	
	lvl = 0;
	(level.compare("DEBUG") == 0) && (lvl = 1);
	(level.compare("INFO") == 0) && (lvl = 2);
	(level.compare("WARNING") == 0) && (lvl = 3);
	(level.compare("ERROR") == 0) && (lvl = 4);
	(this->*(f[lvl]))();	
}

void	Karen::nothin(void) {}

void	Karen::debug(void)
{
	std::cout << "DEBUG:\t\t"
	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-"
	<< "special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "INFO:\t\t"
	<< "I cannot believe adding extra bacon cost more money. You don't put "
	<< "enough! If you did i would not have to as for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "WARNING:\t"
	<< "I think I deserve to have some extra bacon for free. I've been "
	<< "coming here for years and you just started working here last month" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "ERROR:\t\t"
	<< "This is unacceptable, I want to speak to the manager now." << std::endl;
}