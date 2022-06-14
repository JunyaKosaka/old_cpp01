#ifndef WEAPON_HPP_
# define WEAPON_HPP_

# include <string>
# include <iostream>

class Weapon {

public:
  const std::string    &getType(void) const;
  void      setType(std::string const &type);
  Weapon(std::string type);
  Weapon();
  ~Weapon();


private:
  std::string    _type;

};

#endif  // WEAPON_HPP_
