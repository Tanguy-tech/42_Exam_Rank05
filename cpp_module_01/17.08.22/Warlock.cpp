#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell*>::iterator spell_it = this->SpellMap.begin();
	for(; spell_it != this->SpellMap.end(); spell_it++)
	{
		delete spell_it->second;
	}
	this->SpellMap.clear();
}

void	Warlock::introduce() const {
	std::string name = this->getName();
	std::cout << name << ": I am " << name << ", " << this->getTitle() << "!"<< std::endl;
}

void	Warlock::learnSpell(ASpell *aspell)
{
	if (aspell)
		SpellMap.insert(std::pair<std::string, ASpell*>(aspell->getName(), aspell->clone()));
}

void	Warlock::forgetSpell(std::string toForget)
{
	std::map<std::string, ASpell*>::iterator it = SpellMap.find(toForget);
	if (it != SpellMap.end())
		delete it->second;
	SpellMap.erase(toForget);
}

void	Warlock::launchSpell(std::string name, const ATarget &target)
{
	ASpell * spell = SpellMap[name];
   if (spell)
   		spell->launch(target);	   
}
