#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

Zombie* newZombie(std::string name);

void randomChump( std::string name );

int main(void) {
	Zombie* n_Zombie = new Zombie("zzz");
	n_Zombie->announce();
	delete n_Zombie;

	Zombie* z_ptr = newZombie("yyy");
	(*z_ptr).announce();
	delete z_ptr;

	std::string r_name;
	srand(time(NULL));
	r_name += 'a' + (rand() % 26);
	r_name += "_zombie";
	randomChump(r_name);

	return 0;
}
