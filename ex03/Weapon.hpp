#ifndef WEAPON_HPP
# define WEAPON_HPP

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

#endif
