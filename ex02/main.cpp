#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// Fonction utilitaire pour afficher l'état d'un ClapTrap ou dérivé
void displayClapTrapInfo(const ClapTrap &ClapTrap)
{
	std::cout << "﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌ [STATUS] ﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌" << std::endl;
	std::cout << "🔹 Name: " << ClapTrap.getName() << std::endl;
	std::cout << "❤️ Hit Points: " << ClapTrap.getHitPoints() << std::endl;
	std::cout << "⚡ Energy Points: " << ClapTrap.getEnergyPoints() << std::endl;
	std::cout << "🗡️ Attack Damage: " << ClapTrap.getAttackDamage() << std::endl;
	std::cout << "-------------------------\n";
}

int main()
{
	// ==== CLAPTRAP TEST ====
	std::cout << "=========================" << std::endl;
	std::cout << "===== CLAPTRAP TEST =====" << std::endl;
	std::cout << "=========================" << std::endl;
	ClapTrap clap("👹DRAGON");
	displayClapTrapInfo(clap);

	clap.attack("👿enemy A");
	clap.takeDamage(5);
	clap.beRepaired(3);
	displayClapTrapInfo(clap);

	std::cout << std::endl;
	clap.attack("👿enemy B");
	clap.takeDamage(15);
	clap.beRepaired(10);
	displayClapTrapInfo(clap);

	// ==== SCAVTRAP TEST ====
	std::cout << "\n\n🌱🪻🌱🥀🌱🌷🌱🌾🌱🌱🌱🌾🌱🪻🌱🌷🌱🌱🌱🌾🌱🪻🌱🌷🌱🌱🌱🌾🌱🪻🌱" << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << "===== SCAVTRAP TEST =====" << std::endl;
	std::cout << "=========================" << std::endl;

	ScavTrap scav("🛡️ GUARDIAN");
	displayClapTrapInfo(scav);

	scav.attack("👻Monster A");
	scav.takeDamage(50);
	scav.beRepaired(30);
	scav.guardGate();
	displayClapTrapInfo(scav);

	std::cout << std::endl;
	scav.attack("👻Monster B");
	scav.takeDamage(100);
	scav.beRepaired(20);
	scav.guardGate();
	displayClapTrapInfo(scav);

	// ==== FRAGTRAP TEST ====
	std::cout << "\n\n🎆💥✨💥🎆💥✨💥🎆💥✨💥🎆💥✨💥🎆💥✨💥🎆💥✨💥🎆💥✨" << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << "===== FRAGTRAP TEST =====" << std::endl;
	std::cout << "=========================" << std::endl;

	FragTrap frag("💣 BOMBER");
	displayClapTrapInfo(frag);

	frag.attack("👺Enemy X");
	frag.takeDamage(30);
	frag.beRepaired(20);
	frag.highFivesGuys();
	displayClapTrapInfo(frag);

	std::cout << std::endl;
	frag.attack("👺Enemy Y");
	frag.takeDamage(100);
	frag.beRepaired(50);
	frag.highFivesGuys();
	displayClapTrapInfo(frag);

	return 0;
}

// ClapTrap claptrap("ClapTrap");
// claptrap.attack("Target1");
// claptrap.takeDamage(5);
// claptrap.beRepaired(3);

// ScavTrap scavtrap("ScavTrap");
// scavtrap.attack("Target2");
// scavtrap.takeDamage(10);
// scavtrap.beRepaired(5);
// scavtrap.guardGate();

// FragTrap fragtrap("FragTrap");
// fragtrap.attack("Target3");
// fragtrap.takeDamage(15);
// fragtrap.beRepaired(7);
// fragtrap.highFivesGuys();
