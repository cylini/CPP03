#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parameterized constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	// Uncomment the following line if you want to see the copy constructor in action

	std::cout << "ClapTrap" << _name << "was created" << std::endl;
	// *this = other;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << _name << " was called" << std::endl;
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
void ClapTrap::attack(const std::string &target)
{
	// if (_hitPoints == 0)
	// {
	// 	std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	// 	return;
	// }
	// else if (_energyPoints == 0)
	// {
	// 	std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
	// 	return;
	// }
	// else
	// {
	// 	_energyPoints--;
	// 	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	// }

	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	// 	if (_hitPoints == 0)
	// 	{
	// 		std::cout << "🚫 ClapTrap " << _name << " is already destroyed! Can't take more damage!" << std::endl;
	// 		return;
	// 	}

	// 	if (amount >= _hitPoints)
	// 	{
	// 		_hitPoints = 0;
	// 		std::cout << "💥ClapTrap " << _name << " takes " << amount << " points of damage and is now destroyed!" << std::endl;
	// 	}
	// 	else
	// 	{
	// 		_hitPoints -= amount;
	// 		std::cout << "💥ClapTrap " << _name << " takes " << amount << " points of damage! Remaining HP: " << _hitPoints << std::endl;
	// 	}

	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	else if (amount > _hitPoints)
	{
		std::cout << "ClapTrap " << _name << " takes " << _hitPoints << " points of damage!" << std::endl;
		_hitPoints = 0;
		return;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}

	// if (_hitPoints == 0)
	// {
	// 	std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	// 	return;
	// }
	// std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	// _hitPoints -= amount;
	// if (_hitPoints < 0)
	// 	_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	// if (_hitPoints > 0 && _energyPoints > 0)
	// {
	// 	std::cout << "ClapTrap " << _name << " is already repaired!" << std::endl;
	// 	return;
	// }
	// else if (amount > _hitPoints)
	// {
	// 	std::cout << "ClapTrap " << _name << " repairs itself for " << _hitPoints << " hit points!" << std::endl;
	// 	_hitPoints = 0;
	// 	return;
	// }
	// else
	// {
	// 	_hitPoints += amount;
	// 	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	// }

	// if (_energyPoints > 0 && _hitPoints > 0)
	// {
	//     _hitPoints = _hitPoints + amount;
	//     _energyPoints--;// Deduct 1 energy point
	//     std::cout << "🩸ClapTrap " << _name << " repairs " << amount << " points! Remaining HP after repair: " << _hitPoints << std::endl << std::endl;
	// }
	// else if (_hitPoints <= 0)
	//     std::cout << "💀ClapTrap " << _name << " is destroyed and cannot be repaired!"<< std::endl << std::endl;
	// else
	//     std::cout << "💀ClapTrap " << _name << " is out of energy and cannot be repaired!" << std::endl << std::endl;
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}

// Getters
std::string ClapTrap::getName() const { return _name; }
unsigned int ClapTrap::getHitPoints() const { return _hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }
