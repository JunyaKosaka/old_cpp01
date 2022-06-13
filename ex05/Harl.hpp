#ifndef HARL_HPP_
# define HARL_HPP_

# include <string>

class Harl {

public:
	Harl(std::string const &name, Weapon &weapon);
	~Harl();
	void      complain(std::string level);


private:
  void      debug(void);
  void      info(void);
  void      warning(void);
  void      error(void);
};

#endif  // HARL_HPP_
