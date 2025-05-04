#include "ScavTrap.hpp"
#include <iostream>

// Constructeur par défaut
ScavTrap::ScavTrap() : ClapTrap("DefaultScav")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called for " << _name << std::endl;
}

// Constructeur avec nom
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructor called for " << _name << std::endl;
}

// Constructeur de copie
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called for " << other._name << std::endl;
}

// Destructeur
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

// Opérateur d'affectation
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other); // réutilise l'opérateur de la classe mère
	}
	return *this;
}

// Méthode d'attaque (version spéciale pour ScavTrap)
void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack. No energy or hit points left." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

// Méthode spéciale guardGate
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

// #include "ScavTrap.hpp"

// ScavTrap::ScavTrap() : ClapTrap()
// {
// 	std::cout << "ScavTrap Default constructor called" << std::endl;
// }
// ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
// {
// 	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
// }
// ScavTrap::~ScavTrap()
// {
// 	std::cout << "ScavTrap Destructor " << _name << " was called" << std::endl;
// }
// ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
// {
// 	std::cout << "ScavTrap Copy constructor called" << std::endl;
// 	_name = other._name;
// 	_hitPoints = other._hitPoints;
// 	_energyPoints = other._energyPoints;
// 	_attackDamage = other._attackDamage;
// 	std::cout << "ScavTrap " << _name << " was created" << std::endl;
// }
// ScavTrap &ScavTrap::operator=(const ScavTrap &other)
// {
// 	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
// 	if (this != &other)
// 	{
// 		this->_name = other._name;
// 		this->_hitPoints = other._hitPoints;
// 		this->_energyPoints = other._energyPoints;
// 		this->_attackDamage = other._attackDamage;
// 	}
// 	return *this;
// }
// void ScavTrap::attack(const std::string &target)
// {
// 	// if (_hitPoints == 0 || _energyPoints == 0)
// 	// {
// 	// 	std::cout << "ScavTrap " << _name;
// 	// 	if (_hitPoints == 0)
// 	// 		std::cout << " has no hit points left and ";
// 	// 	else if (_energyPoints == 0)
// 	// 		std::cout << " has no energy left and ";
// 	// 	std::cout << "cannot attack!" << std::endl;
// 	// 	return;
// 	// }

// 	if (_hitPoints == 0 || _energyPoints == 0)
// 	{
// 		std::cout << "ScavTrap " << _name;
// 		if (_hitPoints == 0)
// 			std::cout << " has no hit points left and ";
// 		else if (_energyPoints == 0)
// 			std::cout << " has no energy left and ";
// 		std::cout << "cannot attack!" << std::endl;
// 		return;
// 	}
// 	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
// 	_energyPoints--;
// }
// void ScavTrap::guardGate()
// {
// 	if (_hitPoints == 0 || _energyPoints == 0)
// 	{
// 		std::cout << "ScavTrap " << _name;
// 		if (_hitPoints == 0)
// 			std::cout << " has no hit points left and ";
// 		else if (_energyPoints == 0)
// 			std::cout << " has no energy left and ";
// 		std::cout << "cannot enter Gate Keeper mode!" << std::endl;
// 		return;
// 	}

// 	// if (_hitPoints == 0)
// 	// {
// 	// 	std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
// 	// 	return;
// 	// }
// 	// std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
// }