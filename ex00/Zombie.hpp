#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

class Zombie {

public:
	void			announce(void);

	Zombie(std::string const &name);
	~Zombie(void);

private:
	std::string		_name;

};


#endif  // ZOMBIE_HPP_
