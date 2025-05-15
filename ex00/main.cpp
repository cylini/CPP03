#include "ClapTrap.hpp"

/*subject rules
When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it regains <amount> hit points.
Attacking and repairing each cost 1 energy point.
ClapTrap can’t do anything if it has no hit points or energy points left.
*/

static void displayClapTrapInfo(const ClapTrap &clapTrap)
{
	std::cout << "﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌ [STATUS] ﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌" << std::endl;
	std::cout << "Name: " << clapTrap.getName() << std::endl;
	std::cout << "Hit Points: " << clapTrap.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << clapTrap.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
	std::cout << "﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌" << std::endl;
}

int main(void)
{
	ClapTrap robot("Clappy");
	displayClapTrapInfo(robot);

	// 1. Attaque d'un objet
	std::cout << "🔸 [ACTION] Clappy attaque une boîte en carton :" << std::endl;
	robot.attack("a cardboard box");
	displayClapTrapInfo(robot);

	// 2. Réparation
	std::cout << "🔸 [ACTION] Clappy tente de se réparer (5 HP) :" << std::endl;
	robot.beRepaired(5);
	displayClapTrapInfo(robot);

	// 3. Dégâts subis
	std::cout << "🔸 [ACTION] Clappy subit 7 points de dégâts :" << std::endl;
	robot.takeDamage(7);
	displayClapTrapInfo(robot);

	// 4. Attaque répétée jusqu'à épuisement de l'énergie
	std::cout << "🔸 [ACTION] Clappy attaque jusqu'à épuisement d'énergie :" << std::endl;
	for (int i = 0; i < 7; ++i)
	{
		robot.attack("dummy target");
	}
	displayClapTrapInfo(robot);

	// 5. Tentative de réparation sans énergie
	std::cout << "🔸 [ACTION] Clappy essaie de se réparer (3 HP) sans énergie :" << std::endl;
	robot.beRepaired(3);
	displayClapTrapInfo(robot);

	// 6. Prendre suffisamment de dégâts pour mourir
	std::cout << "🔸 [ACTION] Clappy subit 10 points de dégâts (devrait mourir) :" << std::endl;
	robot.takeDamage(10);
	displayClapTrapInfo(robot);

	// 7. Dégât supplémentaire (inutile mais on teste la robustesse)
	std::cout << "🔸 [ACTION] Clappy subit encore 1 point de dégâts :" << std::endl;
	robot.takeDamage(1);
	displayClapTrapInfo(robot);

	// 8. Tentative d'attaque après la mort
	std::cout << "🔸 [ACTION] Clappy essaie d'attaquer après la mort :" << std::endl;
	robot.attack("ghost target");
	displayClapTrapInfo(robot);

	// 9. Tentative de réparation après la mort
	std::cout << "🔸 [ACTION] Clappy essaie de se réparer après la mort (10 HP) :" << std::endl;
	robot.beRepaired(10);
	displayClapTrapInfo(robot);

	std::cout << "🧨 [FIN] ClapTrap va être détruit (sortie de portée)" << std::endl;
	return 0;
}
// // Création d'un ClapTrap
// ClapTrap robot("Clappy");

// std::cout << std::endl;

// // Attaque
// robot.attack("a cardboard box");

// // Réparation
// robot.beRepaired(5);

// // Encaisse des dégâts
// robot.takeDamage(7);

// // Essaie d’attaquer jusqu’à ce que l’énergie tombe à 0
// for (int i = 0; i < 10; ++i)
// {
// 	robot.attack("dummy target");
// }

// // Essaie de se réparer sans énergie
// robot.beRepaired(3);

// // Inflige assez de dégâts pour "tuer" Clappy
// robot.takeDamage(10);

// // Essaie d’attaquer et de réparer après la mort
// robot.attack("ghost target");
// robot.beRepaired(10);
