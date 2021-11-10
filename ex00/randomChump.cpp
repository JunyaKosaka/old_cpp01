#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie* z_ptr = newZombie(name);
	(*z_ptr).announce();
	delete z_ptr;
}
