#include "Weapon.hpp"

std::string Weapon::getType(void) const{
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}
