#include "HumanA.hpp"

void HumanA::attack(void) const {
  std::cout << this->_name << " attacks with their " \
    << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string const &name, Weapon &weapon)
  : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}
