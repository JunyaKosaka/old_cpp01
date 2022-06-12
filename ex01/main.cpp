#include "Zombie.hpp"

int main(void) {
	int N = 3;
	Zombie* z_ptr = zombieHorde(N, "xxx");
	for (int i = 0; i < N; i++) {
		z_ptr[i].announce();
	}
	delete[] z_ptr;
}
