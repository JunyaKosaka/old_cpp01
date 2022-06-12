#include "HumanB.hpp"

void HumanB::attack(void) const {
	if (this->weapon_ == NULL) {
		std::cout << this->name_ << "has no weapon." << std::endl;
	} else {
		std::cout << this->name_ << " attacks with " \
			<< this->weapon_->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon weapon) {
	this->weapon_ = &weapon;
}

HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {}
HumanB::~HumanB() {}
