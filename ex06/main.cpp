/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:11:39 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/24 14:24:42 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl h;
	
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " level" << std::endl;
		return (1);
	}
	h.complain(argv[1]);
	return (0);
}
