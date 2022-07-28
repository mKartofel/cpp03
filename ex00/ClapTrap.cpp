/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:09:37 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/28 19:27:32 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &c)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &c)
{
	 std::cout << "Copy assignment operator called" << std::endl;
	_name = c._name;
	_hitPoints = c._hitPoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints  <= 0  || _energyPoints <=  0)
		return ;
	std::cout << "ClapTrap " << _name << " attacks "  << target << ", causing " << _attackDamage << " points of damage!" <<std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount);

void ClapTrap::beRepaired(unsigned int amount);