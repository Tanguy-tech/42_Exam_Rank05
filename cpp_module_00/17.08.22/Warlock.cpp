#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

void	Warlock::introduce() const {
	std::string name = this->getName();
	std::cout << name << ": I am " << name << ", " << this->getTitle() << "!"<< std::endl;
}