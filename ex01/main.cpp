/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:37:57 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 10:46:14 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) 
{
	ScavTrap a ("scap");
	ScavTrap b(a);
	ScavTrap c;
	c = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	a.attack("who?");
	a.attack("what?");
	a.attack("where?");
	a.attack("why?");
	std::cout << a << std::endl;

	for (int i = 0; i < 46; i++)
		a.beRepaired(1);
	std::cout << a << std::endl;

	a.attack("wharum?");

	ScavTrap d("dap");
	std::cout << d << std::endl;
	d.guardGuate();
	d.takeDamage(50);
	std::cout << d << std::endl;
	d.takeDamage(60);
	std::cout << d << std::endl;
	d.beRepaired(21);


	return 0;
}