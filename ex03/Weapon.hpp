#ifndef WEAPON_HPP_
# define WEAPON_HPP_

# include <string>
# include <iostream>

class Weapon {

public:
	std::string		getType(void) const;
	void			setType(std::string type);
	Weapon(std::string type);
	Weapon();
	~Weapon();


private:
	std::string		type_;

};

#endif  // WEAPON_HPP_
