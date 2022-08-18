#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(ASpell const &other): _name(other._name), _effects(other._effects) {}

ASpell &ASpell::operator=(ASpell const &other) {
	this->_name = other._name;
	this->_effects = other._effects;
	return (*this);
}

ASpell::~ASpell() {}

void	ASpell::launch(const ATarget& atarget) const 
{
	atarget.getHitBySpell((*this));
}
