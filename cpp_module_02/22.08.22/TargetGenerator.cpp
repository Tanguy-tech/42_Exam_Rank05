#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *target) {
	std::vector<ATarget*>::iterator	tit = _targets.begin();
	for (; tit != _targets.end(); tit++)
	{
		if ((*tit)->getType() == (*target).getType())
			return ;
	}
	this->_targets.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(const std::string &target) {
	std::vector<ATarget*>::iterator	tit = _targets.begin();
	for (; tit != _targets.end();)
	{
		if ((*tit)->getType() == target)
		{
			delete (*tit);
			tit = _targets.erase(tit);
		}
		else
			tit++; 
	}	
}

ATarget	*TargetGenerator::createTargetType(const std::string &target) {
	std::vector<ATarget*>::iterator	tit = _targets.begin();
	for (; tit != _targets.end(); tit++)
	{
		if ((*tit)->getType() == target)
			return (*tit)->clone();
	}
	return NULL;
}

TargetGenerator::~TargetGenerator() {}
