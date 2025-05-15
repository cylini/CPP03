#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// Fonction pour afficher l'état du robot
void displayClapTrapInfo(const DiamondTrap &clapTrap)
{
	std::cout << "\n📊 Status Report 📊" << std::endl;
	std::cout << "🤖 Name          : " << clapTrap.getName() << std::endl;
	std::cout << "❤️ Hit Points    : " << clapTrap.getHitPoints() << std::endl;
	std::cout << "⚡ Energy Points : " << clapTrap.getEnergyPoints() << std::endl;
	std::cout << "💥 Attack Damage : " << clapTrap.getAttackDamage() << std::endl;
	std::cout << "=============================" << std::endl;
}
int main()
{
	std::cout << "\n💎🧬🧪===============================" << std::endl;
	std::cout << "     🧠 DIAMONDTRAP TESTS 🧠" << std::endl;
	std::cout << "💎🧬🧪===============================\n"
			  << std::endl;

	DiamondTrap myDiamond_2 ("💎 DIAMOND 1");
	// DiamondTrap myDiamond_2(myDiamond_1);

	std::cout << "le monstre 2 s'appelle  " << myDiamond_2.getName() << std::endl;
	displayClapTrapInfo(myDiamond_2);

	std::cout << "\n🎯 Diamond attacks 👾 ENEMY!" << std::endl;
	myDiamond_2.attack("👾 ENEMY");

	std::cout << "\n💬 Diamond asks who he is:" << std::endl;
	myDiamond_2.whoAmI();

	std::cout << "\n💢 Diamond takes damage (50 HP)" << std::endl;
	myDiamond_2.takeDamage(50);

	std::cout << "\n🛠️ Diamond repairs (30 HP)" << std::endl;
	myDiamond_2.beRepaired(30);

	std::cout << "\n🧼 Diamond requests a high five:" << std::endl;
	myDiamond_2.highFivesGuys();

	std::cout << "\n🛡️ Diamond enters guard gate mode:" << std::endl;
	myDiamond_2.guardGate();

	std::cout << "\n💢 Diamond takes damage (60 HP)" << std::endl;
	myDiamond_2.takeDamage(60);

	std::cout << "\n🛠️ Diamond repairs (10 HP)" << std::endl;
	myDiamond_2.beRepaired(10);

	std::cout << "\n🎯 Diamond attacks 👾 ENEMY!" << std::endl;
	myDiamond_2.attack("👾 ENEMY");

	std::cout << "\n💢 Diamond takes damage (30 HP)" << std::endl;
	myDiamond_2.takeDamage(30);

	displayClapTrapInfo(myDiamond_2);

	std::cout << "\n🧼 End of main(), destruction begins...\n"
			  << std::endl;
	return 0;
}

// std::cout << "===== Create DiamondTrap =====" << std::endl;
// DiamondTrap diamond("💎SHINY");

// std::cout << "\n===== TEST attack() =====\n"
// 		  << std::endl;
// diamond.attack("🧌 GIANT");

// std::cout << "\n===== TEST whoAmI() =====\n"
// 		  << std::endl;
// diamond.whoAmI();

// std::cout << "\n===== TEST highFiveGuys() (frm FragTrap) =====\n"
// 		  << std::endl;
// diamond.highFivesGuys();

// std::cout << "\n===== TEST guardGate() (frm FragTrap) =====\n"
// 		  << std::endl;
// diamond.guardGate();
// std::cout << std::endl;

// return 0;
// DiamondTrap diamond("💎 DIAMOND");
// displayClapTrapInfo(diamond);
// diamond.attack("👾TARGET"); // doit venir de ScavTrap
// diamond.whoAmI();			// affiche son nom + nom ClapTrap
// diamond.takeDamage(50);		// hérité de ClapTrap
// diamond.beRepaired(30);		// idem
// displayClapTrapInfo(diamond);
// #include "ClapTrap.hpp"
// #include "ScavTrap.hpp"
// #include "FragTrap.hpp"
// #include "DiamondTrap.hpp"

// int main() {
// 	std::cout << "\n💎🧬🧪===============================" << std::endl;
// 	std::cout << "     🧠 DIAMONDTRAP TESTS 🧠" << std::endl;
// 	std::cout << "💎🧬🧪===============================\n" << std::endl;

// 	DiamondTrap diamond("💎 DIAMOND");

// 	displayClapTrapInfo(diamond);

// 	std::cout << "\n🎯 Diamond attacks 👾 ENEMY!" << std::endl;
// 	diamond.attack("👾 ENEMY");

// 	std::cout << "\n💬 Diamond asks who he is:" << std::endl;
// 	diamond.whoAmI();

// 	std::cout << "\n💢 Diamond takes damage (50 HP)" << std::endl;
// 	diamond.takeDamage(50);

// 	std::cout << "\n🛠️ Diamond repairs (30 HP)" << std::endl;
// 	diamond.beRepaired(30);

// 	displayClapTrapInfo(diamond);

// 	std::cout << "\n🧼 End of main(), destruction begins...\n" << std::endl;
// 	return 0;
// }
