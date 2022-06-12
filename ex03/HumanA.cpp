#include "HumanA.hpp"

void HumanA::attack(void) const {
	std::cout << this->name_ << " attacks with their " \
		<< this->weapon_.getType() << std::endl;
}

HumanA::HumanA(std::string const &name, Weapon &weapon)
	: name_(name), weapon_(weapon) {}

HumanA::~HumanA() {}
