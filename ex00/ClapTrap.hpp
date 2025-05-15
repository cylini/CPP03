#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string &target);// Attack a target
	void takeDamage(unsigned int amount);// Take damage
	void beRepaired(unsigned int amount);// Repair damage

	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
};

#endif