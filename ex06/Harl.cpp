#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for "
    "my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
  std:: cout << "I really do!" << std::endl;
}

void Harl::info(void) {
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
  std::cout << "You didn’t putenough bacon in my burger!" << std::endl;
  std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
  std::cout << "I’ve been coming for years whereas you started working here "
    "since last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable! "
    "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
  std::string level_list[Harl::level_num] = {
    "DEBUG", "INFO", "WARNING", "ERROR"
  };
  int idx = 0;
  for (; idx < Harl::level_num; idx++) {
    if (level == level_list[idx]) {
      break;
    }
  }
  switch (idx) {
    case 0:
      debug();
      std::cout << std::endl;
    case 1:
      info();
      std::cout << std::endl;
    case 2:
      warning();
      std::cout << std::endl;
    case 3:
      error();
      std::cout << std::endl;
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
  }
}
