#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrapp default constructor called for " << _name << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor called for " << _name << std::endl;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << other._name << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << _name << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other); // réutilise l'opérateur de la classe mère
	}
	return *this;
}
void FragTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " can't attack. No energy or hit points left." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target
			  << " , causing " << _attackDamage << " points of damage!" << std::endl;
}
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}
