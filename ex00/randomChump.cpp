#include "Zombie.hpp"

void randomChump( std::string name ) {
	
	Zombie* z_ptr = new Zombie(name);
	(*z_ptr).announce();
	delete z_ptr;
}
