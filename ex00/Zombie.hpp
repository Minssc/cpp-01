/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:45:12 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 12:21:31 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string		_name;
		Zombie(void);
	public:
		Zombie(std::string name);
		~Zombie(void);
		void			announce(void);
		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);
};

# endif