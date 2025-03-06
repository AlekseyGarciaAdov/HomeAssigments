#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

int main() {
    Weapon autobotWeapon("Energon Axe");
    Engine autobotEngine("Truck");
    Autobot optimus("Optimus Prime", 100, 80, autobotWeapon, autobotEngine, 95, 100);
    optimus.transform();
    optimus.attack();
    optimus.protect();

    Weapon decepticonWeapon("Plasma Cannon");
    Engine decepticonEngine("Jet");
    Decepticon megatron("Megatron", 95, 85, decepticonWeapon, decepticonEngine, 90, 95);
    megatron.transform();
    megatron.attack();
    megatron.deceive();

    Weapon dinobotWeapon("Sword");
    Engine dinobotEngine("T-Rex");
    Dinobot grimlock("Grimlock", 90, 70, dinobotWeapon, dinobotEngine, 85, 90);
    grimlock.transform();
    grimlock.attack();
    grimlock.roar();

    return 0;
}