

#include "../inc/Enemy.hpp"
#include "../inc/Character.hpp"
#include "../inc/PlasmaRifle.hpp"
#include "../inc/PowerFist.hpp"
#include "../inc/RadScorpion.hpp"
#include "../inc/SuperMutant.hpp"

void mainTests(){
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;

    delete zaz;
    if (b->getHP() != 0)
        delete b;
    delete pr;
    delete pf;
}

void myTests(){
    Character* tom = new Character("Tom");
    PlasmaRifle* rifle = new PlasmaRifle();
    PowerFist* fist = new PowerFist();
    Enemy* jerry = new SuperMutant();
    tom->equip(rifle);
    std::cout << "Tom with a rifle: " << std::endl << *tom;
    tom->attack(jerry);
    tom->attack(jerry);
    tom->attack(jerry);
    tom->attack(jerry);

    std::cout << *tom;
    std::cout << "Jerry's health: " << jerry->getHP() << std::endl;
    tom->equip(fist);
    tom->attack(jerry);
    tom->attack(jerry);
    std::cout << *tom;
    std::cout << "Jerry's health: " << jerry->getHP() << std::endl;
    std::cout << "Recovering AP..." << std::endl;
    tom->recoverAP();
    std::cout << *tom;
    tom->attack(jerry);


    std::cout << "===================================================" << std::endl;
    std::cout << "Testing operator= and copy constructors" << std::endl;
    Character *tempCharacter = new Character(*tom);
    // std::cout << *tempCharacter;
    // AWeapon *tempRifle = new PlasmaRifle(*rifle);
    // tempCharacter->equip(tempRifle);
    std::cout << *tempCharacter;
    if (jerry->getHP() > 0)
        delete jerry;
    delete tom;
    delete rifle;
    delete fist;
}

int main() {
	mainTests();
    std::cout << "===================================================" << std::endl;
    std::cout << "MY TESTS" << std::endl;
    std::cout << "===================================================" << std::endl;
	myTests();
	return 0;
}