#ifndef HUMANA_HPP_
# define HUMANA_HPP_

# include <string>
# include <iostream>
# include "Weapon.hpp"

// HumanA will always be armed
class HumanA {

public:
	void			attack(void) const;
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();


private:
	std::string		name_;
	Weapon			&weapon_;
};

#endif  // HUMANA_HPP_
