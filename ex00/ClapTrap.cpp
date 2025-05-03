#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(1)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(1)
{
	std::cout << "Parameterized constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor " << _name << " was called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ClapTrap " << _name << "was created" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}
void ClapTrap::attack(const std::string &target) // method to attack a target
{
	if (_hitPoints == 0 || _energyPoints == 0) // check if ClapTrap is dead or has no energy
	{
		std::cout << "ClapTrap " << _name;				 // print the name of ClapTrap
		if (_hitPoints == 0)							 // check if ClapTrap is dead
			std::cout << " has no hit points left and "; // print that it has no hit points
		else if (_energyPoints == 0)					 // check if ClapTrap has no energy
			std::cout << " has no energy left and ";	 // print that it has no energy
		std::cout << "cannot attack!" << std::endl;		 // print that it cannot attack
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl; // print the attack message
	_energyPoints--;																												  // decrease energy points by 1
}
void ClapTrap::takeDamage(unsigned int amount) // method to take damage
{
	if (_hitPoints == 0) // check if ClapTrap is dead
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl; // print that it is already dead
		return;																   // return from the function
	}
	else if (amount >= _hitPoints) // check if the damage amount is greater than or equal to hit points
	{
		std::cout << "ClapTrap " << _name << " takes " << _hitPoints << " points of damage and dies!" << std::endl; // print that it takes all hit points and dies
		_hitPoints = 0;																								// set hit points to 0
	}
	else // if the damage amount is less than hit points
	{
		_hitPoints -= amount;																																			  // decrease hit points by the damage amount
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining HP: " << _hitPoints << " Energie left: " << _energyPoints << std::endl; // print the damage message
	}
}

void ClapTrap::beRepaired(unsigned int amount) // method to repair ClapTrap
{
	if (_hitPoints == 0) // check if ClapTrap is dead
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired!" << std::endl; // print that it is dead
		return;
	}
	if (_energyPoints == 0) // check if ClapTrap has no energy
	{
		std::cout << "ClapTrap " << _name << " has no energy and cannot be repaired!" << std::endl; // print that it has no energy
		return;
	}
	_hitPoints += amount; // increase hit points by the repair amount
	_energyPoints--;	  // decrease energy points by 1
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount
			  << " hit points, used 1 energy! Current HP: " << _hitPoints
			  << ", Energy left: " << _energyPoints << std::endl;
}

// Getters
std::string ClapTrap::getName() const { return _name; }
unsigned int ClapTrap::getHitPoints() const { return _hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }
