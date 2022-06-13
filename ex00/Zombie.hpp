#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

class Zombie {

public:
  void      announce(void);

  Zombie(std::string name = "noname");
  ~Zombie(void);

private:
  std::string    _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif  // ZOMBIE_HPP_
