/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:13:50 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/14 16:09:51 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

static void	perror_exit(std::string str)
{
	std::cout << str << std::endl;
	exit(1);
}

static void	myreplace(std::string &cont, const std::string &s1, const std::string &s2)
{
	std::size_t	npos;
	std::size_t	lpos;
	std::string	ncont;

	ncont.clear();
	npos = cont.find(s1);
	lpos = 0;
	while (npos != std::string::npos)
	{
		ncont.append(cont.substr(lpos, npos - lpos));
		ncont.append(s2);
		lpos = npos + s1.length();
		npos = cont.find(s1, lpos);
	}
	ncont.append(cont.substr(lpos));
	cont = ncont;
}

static void	file_io(std::string file, std::string s1, std::string s2)
{
	std::ifstream	is;
	std::ofstream	os;
	std::string		content;
	char			c;

	content.clear();
	if (!s1.length())
		perror_exit("string to find cannot be empty string");
	is.open(file.c_str());
	if (!is.is_open())
		perror_exit("failed to open file to read:" + file);
	os.open((file + ".replace").c_str());
	if (!os.is_open())
		perror_exit("failed to open file to write:" + file + ".replace");
	c = is.get();
	while (is.good())
	{
		content += c;
		c = is.get();
	}
	is.close();
	myreplace(content, s1, s2);
	os << content;
	os.close();
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout
		<< "Usage: " << argv[0] << " filename s1 s2" << std::endl;
		return (1);
	}
	file_io(argv[1], argv[2], argv[3]);
	return (0);
}