/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:12:32 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 14:37:25 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <string>

class Weapon
{
private:
	std::string			_type;
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	void				setType(std::string type);
	const std::string	&getType(void);
};

# endif