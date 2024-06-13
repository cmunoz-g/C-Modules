/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camunozg <camunozg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:11:54 by camunozg          #+#    #+#             */
/*   Updated: 2024/06/13 12:42:47 by camunozg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors, Destructor, Copy Assignment Operator Overload */

ClapTrap::ClapTrap( void ) : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "A new ClapTrap was created, with no name!\n";
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	if (name.empty())
		_name = "A Random ClapTrap";
	std::cout << "A new ClapTrap named " << _name << " was created!\n";
}

ClapTrap::ClapTrap( const ClapTrap &toCopy ) {
	*this = toCopy;
	std::cout << "A ClapTrap named " << _name << " was created by copying!\n";
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "A ClapTrap named " << _name << " was destroyed, goodbye!\n";
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

/* Other Member Functions */

void ClapTrap::attack( const std::string& target ) {
	if (_energyPoints > 0) {
		if (target.empty())
			std::cout << _name << " attacks no one, causing " << _attackDamage << " points of damage!\n";
		else
			std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
		_energyPoints--;
	}
	else 
		std::cout << _name << " doesn't have enough energy to attack, so he takes a nap instead!\n";
}

void ClapTrap::takeDamage( unsigned int amount ) {
	_hitPoints -= amount;
	std::cout << _name << " takes " << amount << " points of damage, ouch!\n";
	if (_hitPoints <= 0) {
		_hitPoints = 0;
		std::cout << _name << " has no hit points left!\n";
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (_energyPoints > 0) {
		if (_hitPoints == 10)
			std::cout << _name << " is already at full health!\n";
		else {
			_hitPoints += amount;
			if (_hitPoints > 10)
				_hitPoints = 10;
			std::cout << _name << " was repaired and has gained " << amount << " hit points. His health is now at " << _hitPoints << "\n";
			_energyPoints--;
		}
	}
	else
		std::cout << _name << " has no energy points left, he can't be repaired!\n";
}
