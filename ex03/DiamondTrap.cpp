#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : _name("default")
{
	std::cout << "(Child Constructor) DiamondTrap default created" << std::endl;
}

// copy
// can use init list
// f there are unique members in each class that need to be copied -> better to explicitly copy the members after the base class constructors are called
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{

	_name = other._name; // Copy the specific member _name
	// Copy the specific members from ClapTrap, FragTrap, and ScavTrap
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "(Child Constructor) DiamondTrap " << _name << " copied" << std::endl;
}

// assign
// cannot use init list
// inherit from both ScavTrap and FragTrap, and both inherit from ClapTrap
//=> 2 separate copies of ClapTrap -> ambiguity error!!
//-> make sure assign each properly
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
DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(), FragTrap(), _name(name)
{
	ScavTrap::setScavEnergyPoints(50); // Set ScavTrap's energy points

	ClapTrap::_name = _name + "_clap_name";	 // Modify ClapTrap's name to have the "_clap_name" suffix
	_hitPoints = FragTrap::_hitPoints;		 // Initialize from FragTrap
	_energyPoints = ScavTrap::_energyPoints; // Initialize from ScavTrap
	_attackDamage = FragTrap::_attackDamage; // Initialize from FragTrap
	std::cout << "(Child Constructor) DiamondTrap Created : " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(Child Constructor) DiamondTrap Destroyed : " << _name << std::endl;
}

// member funcs
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
// Default constructor
// DiamondTrap::DiamondTrap()
// 	: ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
// {
// 	this->_hitPoints = FragTrap::_hitPoints;
// 	this->_energyPoints = ScavTrap::_energyPoints;
// 	this->_attackDamage = FragTrap::_attackDamage;

// 	std::cout << "💎 DiamondTrap default constructor called for " << this->_name << std::endl;
// }

// // Constructor with name
// DiamondTrap::DiamondTrap(const std::string &name)
// 	: ClapTrap(name + "_clap_name"), ScavTrap(), /* FragTrap(), */ _name(name)
// {
// 	this->_hitPoints = FragTrap::_hitPoints;
// 	this->_energyPoints = ScavTrap::_energyPoints;
// 	this->_attackDamage = FragTrap::_attackDamage;

// 	std::cout << "💎 DiamondTrap constructor called for " << this->_name << std::endl;
// }

// // Copy constructor
// DiamondTrap::DiamondTrap(const DiamondTrap &other)
// 	: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
// {
// 	_name = other._name;
// 	this->_hitPoints = other._hitPoints;
// 	this->_energyPoints = other._energyPoints;
// 	this->_attackDamage = other._attackDamage;
// 	std::cout << "💎 DiamondTrap copy constructor called for " << this->_name << std::endl;
// }

// // Assignment operator
// DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
// {
// 	if (this != &other)
// 	{
// 		ClapTrap::operator=(other);
// 		ScavTrap::operator=(other);
// 		FragTrap::operator=(other);
// 		this->_name = other._name;
// 	}
// 	std::cout << "💎 DiamondTrap assignment operator called for " << this->_name << std::endl;
// 	return *this;
// }

// // Destructor
// DiamondTrap::~DiamondTrap()
// {
// 	std::cout << "💎 DiamondTrap destructor called for " << this->_name << std::endl;
// }

// // whoAmI method
// void DiamondTrap::whoAmI()
// {
// 	std::cout << "🤖 I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
// }

// // Use ScavTrap's attack
// void DiamondTrap::attack(const std::string &target)
// {
// 	ScavTrap::attack(target);
// }

// #include "DiamondTrap.hpp"
// #include <iostream>

// // Default constructor
// DiamondTrap::DiamondTrap()
// 	: ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
// {
// 	// this->_hitPoints = FragTrap::_hitPoints;
// 	// this->_energyPoints = ScavTrap::_energyPoints;
// 	// this->_attackDamage = FragTrap::_attackDamage;
// 	std::cout << "💎 DiamondTrap default constructor called for " << this->_name << std::endl;
// }

// // Constructor with name
// DiamondTrap::DiamondTrap(const std::string &name)
// 	: ClapTrap(name + "_clap_name"), ScavTrap(), /* FragTrap(), */ _name(name)
// {
// 	this->_hitPoints = FragTrap::_hitPoints;
// 	this->_energyPoints = ScavTrap::_energyPoints;
// 	this->_attackDamage = FragTrap::_attackDamage;

// 	std::cout << "💎 DiamondTrap constructor called for " << this->_name << std::endl;
// }

// // Copy constructor
// DiamondTrap::DiamondTrap(const DiamondTrap &other)
// 	: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
// {
// 	std::cout << "💎 DiamondTrap copy constructor called for " << this->_name << std::endl;
// }

// // Assignment operator
// DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
// {
// 	if (this != &other)
// 	{
// 		ClapTrap::operator=(other);
// 		ScavTrap::operator=(other);
// 		FragTrap::operator=(other);
// 		this->_name = other._name;
// 	}
// 	std::cout << "💎 DiamondTrap assignment operator called for " << this->_name << std::endl;
// 	return *this;
// }

// // Destructor
// DiamondTrap::~DiamondTrap()
// {
// 	std::cout << "💎 DiamondTrap destructor called for " << this->_name << std::endl;
// }

// // whoAmI method
// void DiamondTrap::whoAmI()
// {
// 	std::cout << "🤖 I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
// }
// // Attack method
// void DiamondTrap::attack(const std::string &target)
// {
// 	ScavTrap::attack(target);
// }
