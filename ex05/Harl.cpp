#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
  std::cout << "DEBUG: I love having extra bacon for "
    "my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void Harl::info(void) {
  std::cout << "INFO: I cannot believe adding extra bacon costs more money. "
    "You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void Harl::warning(void) {
  std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for "
    "years whereas you started working here since last month."
    << std::endl;
}

void Harl::error(void) {
  std::cout << "ERROR: This is unacceptable! I want to speak to the manager now."
    << std::endl;
}

void Harl::complain(std::string level) {
  void (Harl::*funcptr[Harl::level_num])() = {
    &Harl::debug, &Harl::info, &Harl::warning, &Harl::error
  };
  std::string level_list[Harl::level_num] = {
    "DEBUG", "INFO", "WARNING", "ERROR"
  };
  for (int i = 0; i < Harl::level_num; i++) {
    if (level == level_list[i]) {
      (this->*funcptr[i])();
      return;
    }
  }
  std::cout << "OK: I love this burger!" << std::endl;
}