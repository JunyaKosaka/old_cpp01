#include "HumanB.hpp"

void HumanB::attack(void) const {
  if (this->_weapon == NULL) {
    std::cout << this->_name << " attacks with their bare hands" << std::endl;
  } else {
    std::cout << this->_name << " attacks with their "
      << this->_weapon->getType() << std::endl;
  }
}

void HumanB::setWeapon(Weapon &weapon) {
  this->_weapon = &weapon;
}

HumanB::HumanB(std::string const &name) : _name(name), _weapon(NULL) {}
HumanB::~HumanB() {}
