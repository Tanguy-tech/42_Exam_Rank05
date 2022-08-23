#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getName() + ": This looks like another boring day." << std::endl;
}

void	Warlock::introduce() const {
	std::cout << this->getName() + ": I am " + this->getName() + ", " + this->getTitle() + "!" << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() + ": My job here is done!" << std::endl;
}
