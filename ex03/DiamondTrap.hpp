#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &other);
	void attack(const std::string &target);
	void whoAmI();
	// Getters
	// std::string getName() const { return _name; }
	// unsigned int getHitPoints() const { return FragTrap::getHitPoints(); }
	// unsigned int getEnergyPoints() const { return ScavTrap::getEnergyPoints(); }
	// unsigned int getAttackDamage() const { return FragTrap::getAttackDamage(); }
};

#endif