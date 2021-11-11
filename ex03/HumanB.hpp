#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

// HumanB may not always have a Weapon
class HumanB {

public:
	void			attack(void) const;
	void			setWeapon(Weapon weapon);
	HumanB(std::string name);
	~HumanB();

private:
	HumanB();
	std::string		name_;
	Weapon*			weapon_;
};

#endif