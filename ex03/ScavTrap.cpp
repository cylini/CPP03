#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("DefaultScav")
{
	// _hitPoints = 100;
	// _energyPoints = 50;
	// _attackDamage = 20;
	std::cout << "ScavTrap default constructorr called for " << _name << std::endl;
}

// Constructeur avec nom
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	// _hitPoints = 100;
	// _energyPoints = 50;
	// _attackDamage = 20;
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
			  << ", caausing " << _attackDamage << " points of damage!" << std::endl;
}

// Méthode spéciale guardGate
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
// Setter pour les points d'énergie
void ScavTrap::setScavEnergyPoints(unsigned int energyPoints)
{
	_energyPoints = energyPoints;
	std::cout << "ScavTrap " << _name << " energy points set to " << _energyPoints << std::endl;
}


