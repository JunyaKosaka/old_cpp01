#include "Weapon.hpp"

std::string Weapon::getType(void) const{
	return this->type_;
}

void Weapon::setType(std::string type) {
	this->type_ = type;
}

Weapon::Weapon(std::string type) : type_(type) {}
Weapon::~Weapon() {}
