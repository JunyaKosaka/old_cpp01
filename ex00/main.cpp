#include "Zombie.hpp"

int main(void) {
	Zombie* n_Zombie = new Zombie("zzz");
	n_Zombie->announce();
	delete n_Zombie;

	Zombie* z_ptr = newZombie("yyy");
	(*z_ptr).announce();
	delete z_ptr;

	randomChump("random");

	return 0;
}
