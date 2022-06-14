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
  std::cout << "I cannot believe adding extra bacon costs more money."
    << std::endl;
  std::cout << "You didn’t putenough bacon in my burger!" << std::endl;
  std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free."
    << std::endl;
  std::cout << "I’ve been coming for years whereas you started working here "
    "since last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable! "
    "I want to speak to the manager now." << std::endl;
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
  std::cout << "[ Probably complaining about insignificant problems ]"
    << std::endl;
}
