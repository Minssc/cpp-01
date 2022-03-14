/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:56:33 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 12:59:29 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*ret = new Zombie[N];

	std::cout << "Spawning Zombie horde of " << N << std::endl;
	for (int i = 0; i < N; ++i)
		ret[i].setName(name + " #" + std::to_string(i + 1));

	return (ret);
}
