#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

class Zombie {

public:
	void			announce(void);
	void			set_name(std::string name);
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

private:
	std::string		_name;

};

Zombie* zombieHorde(int N, std::string name);

#endif  // ZOMBIE_HPP_
