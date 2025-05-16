#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	_name = "Default";								   // Default name
	ClapTrap::_energyPoints = ScavTrap::_energyPoints; // Initialize from ScavTrap
	std::cout << "(Child Constructor) DiamondTrap default created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{

	_name = other._name; // Copy the specific member _name
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints; // Initialize from ScavTrap
	std::cout << "(Child Constructor) DiamondTrap " << _name << " copied" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		_name = other._name; // specific member _name assigned
	}
	std::cout << "(Child Constructor) DiamondTrap " << _name << " assigned" << std::endl;
	return (*this);
}

// construtor with name
DiamondTrap::DiamondTrap(const std::string &name) : _name(name)
{

	ClapTrap::_name = _name + "_clap_name"; // Modify ClapTrap's name to have the "_clap_name" suffix
	_hitPoints = FragTrap::_hitPoints;
	ClapTrap::_energyPoints = ScavTrap::_energyPoints; // Initialize from ScavTrap
	_attackDamage = FragTrap::_attackDamage;		   // Initialize from FragTrap
	std::cout << "(Child Constructor) DiamondTrap Created : " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(Child Constructor) DiamondTrap Destroyed : " << _name << std::endl;
}

// attack (use ScavTrap's attack method)
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

// whoAmI
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name: " << _name << " | ClapTrap Name: " << ClapTrap::getName() << std::endl;
}
