/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:11:58 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 16:58:42 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_HPP__
# define __KAREN_HPP__

# include <string>
# include <iostream>

class Karen
{
	private:
		void	nothin(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
};

# endif