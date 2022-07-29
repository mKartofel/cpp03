/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:22:44 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 10:39:27 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor with name called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &s) : ClapTrap(s)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = s;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &s)
{
	 std::cout << "ScavTrap copy assignment operator called" << std::endl;
	_name = s._name;
	_hitPoints = s._hitPoints;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints  <= 0)
		std::cout << "ScavTrap " << _name << " is out of hit points !" << std::endl;
	else if (_energyPoints <=  0)
		std::cout << "ScavTrap " << _name << " is out of energy points !" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks "  << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ScavTrap::guardGuate(void) const
{
	std::cout << "ScavTrap " << _name << " gate k33p3r mode is now activated !" << std::endl;
}