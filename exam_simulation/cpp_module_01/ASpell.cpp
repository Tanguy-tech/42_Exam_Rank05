#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &other) : _name(other._name), _effects(other._effects) {}

ASpell	&ASpell::operator=(const ASpell &other) {
	this->_name = other._name;
	this->_effects = other._effects;
	return ((*this));
}

void	ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}

ASpell::~ASpell() {}
