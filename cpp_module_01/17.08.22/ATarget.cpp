#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::~ATarget() {}

void	ATarget::getHitBySpell(const ASpell& aspell) const
{
	std::cout << this->getType() << " has been " << aspell.getEffects() << "!" << std::endl;
}
