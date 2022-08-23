#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *spell) {
	std::vector<ATarget*>::iterator sit = _targets.begin();
	for (; sit != _targets.end(); sit++)
	{
		if ((*sit)->getType() == (*spell).getType())
			return ;
	}
	this->_targets.push_back(spell->clone());
}

void	TargetGenerator::forgetTargetType(const std::string &spell) {
	std::vector<ATarget*>::iterator	sit = _targets.begin();
	for (; sit != _targets.end();)
	{
		if ((*sit)->getType() == spell)
		{
			delete (*sit);
			sit = _targets.erase(sit);
		}
		else
			sit++;
	}
}

ATarget	*TargetGenerator::createTarget(const std::string &spell) {
	std::vector<ATarget*>::iterator sit = _targets.begin();
	for (; sit != _targets.end(); sit++)
	{
		if ((*sit)->getType() == spell)
			return (*sit);
	}
	return NULL;
}
