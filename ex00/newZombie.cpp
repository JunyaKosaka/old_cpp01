#include "Zombie.hpp"

Zombie* newZombie(std::string const &name) {
	Zombie* n_zombie = new Zombie(name);
	return n_zombie;
}
