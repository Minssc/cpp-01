/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:19:55 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 14:47:10 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap): _name(name), _weapon(weap) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout
	<< _name << " attacks with his "
	<< _weapon.getType() << std::endl;
}