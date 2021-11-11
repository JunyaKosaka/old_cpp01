#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

// HumanA will always be armed
class HumanA {

public:
	void			attack(void) const;
	HumanA(std::string name, Weapon weapon);
	~HumanA();

private:
	std::string		name_;
	Weapon			weapon_;
};

#endif
