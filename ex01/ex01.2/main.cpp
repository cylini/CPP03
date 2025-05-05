#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("clap1");  // take damage until dead
    ClapTrap clap2("clap2"); //  attack X even when X is dead + repair until no energy point
    ClapTrap clap3("clap3"); // attack until no energy point
    ScavTrap scav("scav");   // see attack difference in child + guard mode
    ClapTrap clap4("clap4"); // see attack difference in parent + guard mode

    clap.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap3.attack("clap2");
    clap2.takeDamage(2);
    clap2.takeDamage(2);
    clap2.takeDamage(2);
    clap2.takeDamage(2);
    clap2.beRepaired(4);
    clap2.beRepaired(7);
    clap2.attack("clap");
    clap.takeDamage(3);
    clap.beRepaired(1);
    clap.takeDamage(3);
    clap.takeDamage(3);
    clap.takeDamage(3);
    clap.takeDamage(3);
    clap.beRepaired(1);
    clap.attack("clap2");
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    clap2.beRepaired(7);
    scav.attack("clap2");
    scav.guardGate();
    scav.guardGate();
    scav.takeDamage(100);
    scav.guardGate();
    clap4.attack("scav");
}