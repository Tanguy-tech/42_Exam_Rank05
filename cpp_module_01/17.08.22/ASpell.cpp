#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::~ASpell() {}

void	ASpell::launch(const ATarget& atarget) const 
{
	atarget.getHitBySpell((*this));
}
