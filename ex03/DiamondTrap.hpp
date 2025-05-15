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
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	DiamondTrap(const std::string &name);

	void attack(const std::string &target);
	void whoAmI();
};

#endif