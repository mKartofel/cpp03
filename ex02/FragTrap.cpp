/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:04:21 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:19 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor with name called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &f) : ClapTrap(f)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = f;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const &f)
{
	 std::cout << "FragTrap copy assignment operator called" << std::endl;
	_name = f._name;
	_hitPoints = f._hitPoints;
	_energyPoints = f._energyPoints;
	_attackDamage = f._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << " give me a high five !" << std::endl;
}