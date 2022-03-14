/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:43:09 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 13:00:04 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zh;

	zh = Zombie::zombieHorde(5, "minsunki");
	for(int i = 0; i < 5; ++i)
		zh[i].announce();

	delete[] zh;
	return (0);
}