#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getName() + ": This looks like another boring day." << std::endl;
}

void	Warlock::introduce() const {
	std::cout << this->getName() + ": I am " + this->getName() + ", " + this->getTitle() + "!" << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() + ": My job here is done!" << std::endl;
}

void	Warlock::learnSpell(const ASpell *spell) {
	std::vector<ASpell*>::iterator sit = _spellBook.begin();
	for (; sit != _spellBook.end(); sit++)
	{
		if ((*sit)->getName() == (*spell).getName())
			return ;
	}
	this->_spellBook.push_back(spell->clone());
}

void	Warlock::forgetSpell(const std::string spell) {
	std::vector<ASpell*>::iterator	sit = _spellBook.begin();
	for (; sit != _spellBook.end();)
	{
		if ((*sit)->getName() == spell)
		{
			delete (*sit);
			sit = _spellBook.erase(sit);
		}
		else
			sit++;
	}
}

void	Warlock::launchSpell(const std::string spell, const ATarget &target) {
	std::vector<ASpell*>::iterator	sit = _spellBook.begin();
	for (; sit != _spellBook.end(); sit++)
	{
		if ((*sit)->getName() == spell)
		{
			(*sit)->launch(target);
			return ;
		}
	}
}
