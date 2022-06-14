#ifndef HARL_HPP_
# define HARL_HPP_

# include <string>
# include <iostream>

class Harl {

public:
  Harl();
  ~Harl();
  void      complain(std::string level);


private:
  static const int  level_num = 4;
  void      debug(void);
  void      info(void);
  void      warning(void);
  void      error(void);

};

#endif  // HARL_HPP_
