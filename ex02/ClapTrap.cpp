/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:09:37 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/29 10:24:09 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("random"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor with name called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &c)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = c;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &c)
{
	 std::cout << "ClapTrap copy assignment operator called" << std::endl;
	_name = c._name;
	_hitPoints = c._hitPoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints  <= 0)
		std::cout << "ClapTrap " << _name << " is out of hit points !" << std::endl;
	else if (_energyPoints <=  0)
		std::cout << "ClapTrap " << _name << " is out of energy points !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks "  << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints  <= 0)
		std::cout << "ClapTrap " << _name << " is already out of hit points !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " takes "  << amount << " points of damage!" << std::endl;
		_hitPoints -= amount;
		if (_hitPoints < 0)
			_hitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints  <= 0)
		std::cout << "ClapTrap " << _name << " is out of hit points !" << std::endl;
	else if (_energyPoints <=  0)
		std::cout << "ClapTrap " << _name << " is out of energy points !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " is repaired and gains "  << amount << " hit points" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
}

std::string ClapTrap::getName(void) const
{
	return _name;
}
int ClapTrap::getHitPoints(void) const
{
	return _hitPoints;
}
int ClapTrap::getEnergyPoints(void) const
{
	return _energyPoints;
}
int ClapTrap::getAttackDamage(void) const
{
	return _attackDamage;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & c)
{
	o << "ClapTrap : " << c.getName() << ", hit points : "  << c.getHitPoints() << ", energy points : " << c.getEnergyPoints() << ", attack damage : " << c.getAttackDamage();
	return o;
}