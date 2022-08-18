#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::ATarget(ATarget const &other) : _type(other._type) {}

ATarget &ATarget::operator=(ATarget const &other) {
	this->_type = other._type;
	return (*this);
}

ATarget::~ATarget() {}

void	ATarget::getHitBySpell(const ASpell& aspell) const
{
	std::cout << this->getType() << " has been " << aspell.getEffects() << "!" << std::endl;
}
