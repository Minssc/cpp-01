/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:34:18 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 14:52:56 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(0) {}

HumanB::HumanB(void)
{
	HumanB("John Doe");
}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	std::cout
	<< _name << " attacks with his ";
	if (!(_weapon))
		std::cout << "bare hands" << std::endl;
	else
		std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weap)
{
	_weapon = &weap;
}