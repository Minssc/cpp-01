/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:44:39 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 13:57:03 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z1 = Zombie::newZombie("minsunki");
	z1->announce();
	Zombie *Z[10];

	Zombie::randomChump("Random Zombie #1");

	for (int i = 0; i < 10; ++i)
	{
		std::string	nstr = 
		static_cast<std::ostringstream*>( &(std::ostringstream() << i) )->str();
		Z[i] = Zombie::newZombie("minsunki's slave #" + nstr);
		Z[i]->announce();
	}

	Zombie::randomChump("Random Zombie #2");

	for (int i = 0; i < 10; ++i)
		delete Z[i];
	delete z1;
	return (0);
}