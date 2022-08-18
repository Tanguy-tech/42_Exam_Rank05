#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	std::vector<ATarget*>::iterator tit = _types.begin();
	for(; tit != _types.end(); tit++)
	{
		delete (*tit);
	}
	this->_types.clear();
}

void	TargetGenerator::learnTargetType(ATarget *toLearn)
{
	std::vector<ATarget*>::iterator tit = _types.begin();
	for(; tit != _types.end(); tit++)
	{
		if ((*tit)->getType() == toLearn->getType())
			return ;
	}
	this->_types.push_back(toLearn->clone());
}

void	TargetGenerator::forgetTargetType(std::string const &toForget) {
	std::vector<ATarget*>::iterator tit = _types.begin();
	for(; tit != _types.end(); tit++)
	{
		if ((*tit)->getType() == toForget)
		{
			delete (*tit);
			tit = this->_types.erase(tit);
		}	
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &toCreate) {
	std::vector<ATarget*>::iterator tit = _types.begin();
	for(; tit != _types.end(); tit++)
	{
		if ((*tit)->getType() == toCreate)
			return (*tit);
	}
	return nullptr;
}
