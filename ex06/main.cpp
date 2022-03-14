/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:11:39 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 17:57:09 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	Karen k;
	
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " level" << std::endl;
		return (1);
	}
	k.complain(argv[1]);
	return (0);
}
