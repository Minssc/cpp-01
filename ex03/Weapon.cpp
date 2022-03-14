/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:12:26 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 15:01:50 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void): _type("default weapon") {}

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << getType() << "destroyed." << std::endl;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	&Weapon::getType(void)
{
	return (_type);
}