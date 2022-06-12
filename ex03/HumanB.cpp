#include "HumanB.hpp"

void HumanB::attack(void) const {
	if (this->weapon_ == NULL) {
		std::cout << this->name_ << " attacks with their bare hands" << std::endl;
	} else {
		std::cout << this->name_ << " attacks with their "
			<< this->weapon_->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon_ = &weapon;
}

HumanB::HumanB(std::string const &name) : name_(name), weapon_(NULL) {}
HumanB::~HumanB() {}
