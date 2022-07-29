/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:37:57 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 10:03:39 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap a ("clap");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	a.attack("who?");
	a.attack("what?");
	a.attack("where?");
	a.attack("why?");
	std::cout << a << std::endl;

	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(2);
	std::cout << a << std::endl;

	a.attack("wharum?");

	ClapTrap d("dop");
	std::cout << d << std::endl;
	d.takeDamage(5);
	std::cout << d << std::endl;
	d.takeDamage(15);
	std::cout << d << std::endl;
	d.beRepaired(21);

	return 0;
}