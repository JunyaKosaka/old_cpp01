#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

class Zombie {

public:
	void			announce(void);

	Zombie(std::string const &name = "noname");
	~Zombie(void);

private:
	std::string		_name;

};

Zombie* newZombie(std::string const &name);
void randomChump( std::string const &name );

#endif  // ZOMBIE_HPP_
