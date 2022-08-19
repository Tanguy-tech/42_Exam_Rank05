#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getName() + ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() + ": My job here is done!" << std::endl;
}

void	Warlock::introduce() const {
	std::cout << this->getName() + ": I am " + this->getName() + ", " + this->getTitle()  << std::endl;
}

void	Warlock::learnSpell(const ASpell *spell) {
	std::vector<ASpell*>::iterator spell_it = _spellBook.begin();
	for (; spell_it != _spellBook.end(); spell_it++)
	{
		if ((*spell).getName() == (*(*spell_it)).getName())
			return;
	}
	_spellBook.push_back(spell->clone());
}

void	Warlock::forgetSpell(std::string toForget) {	
	std::vector<ASpell*>::iterator spell_it = _spellBook.begin();
	for (; spell_it != _spellBook.end();)
	{
		if (toForget == (*(*spell_it)).getName())
		{
			delete (*spell_it);
			spell_it = _spellBook.erase(spell_it);
		}
		else
			spell_it++;	
	}
	
}

void	Warlock::launchSpell(std::string toLaunch, ATarget &target) {	
	std::vector<ASpell*>::iterator spell_it = _spellBook.begin();
	for (; spell_it != _spellBook.end(); spell_it++)
	{
		if ((*spell_it)->getName() == toLaunch)
		{
			(*spell_it)->launch(target);
			return ;
		}
	}
}
