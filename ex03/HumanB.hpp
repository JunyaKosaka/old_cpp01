#ifndef HUMANB_HPP_
# define HUMANB_HPP_

# include <string>
# include <iostream>
# include "Weapon.hpp"

// HumanB may not always have a Weapon
class HumanB {

public:
	void			attack(void) const;
	void			setWeapon(Weapon &weapon);
	HumanB(std::string const &name);
	~HumanB();


private:
	HumanB();
	std::string		name_;
	Weapon			*weapon_;
};

#endif  // HUMANB_HPP_
