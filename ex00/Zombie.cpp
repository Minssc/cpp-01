/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:44:58 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/24 14:31:37 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie(void)
{
	std::cout
	<< _name
	<< " died. (deleted)" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout
	<< _name << ": "
	<< "BraiiiiiiinnnzzzZ..." << std::endl;
}
