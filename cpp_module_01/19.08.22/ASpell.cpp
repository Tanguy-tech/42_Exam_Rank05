#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &other) : _name(other._name), _effects(other._effects) {}

ASpell	&ASpell::operator=(const ASpell &other) {
	this->_name = other._name;
	this->_effects = other._effects;
	return (*this);
}

ASpell::~ASpell() {}

void	ASpell::launch(const ATarget &target) {
	target.getHitBySpell((*this));
}
