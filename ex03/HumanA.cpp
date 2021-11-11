#include "HumanA.hpp"

void HumanA::attack(void) const {
	std::cout << this->name_ << " attacks with " \
		<< this->weapon_.getType() << std::endl;
}

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon weapon)
	: name_(name), weapon_(weapon) {}