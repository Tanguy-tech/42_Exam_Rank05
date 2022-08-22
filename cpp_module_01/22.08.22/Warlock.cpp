#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->getName() + ": This looks like another boring day." << std::endl;
}

void	Warlock::introduce() const {
	std::cout << this->getName() + ": I am " + this->getName() + ", " + this->getTitle() << std::endl;
}

Warlock::~Warlock() {
	std::vector<ASpell*>::iterator sit = _spellBook.begin();
	for (; sit != _spellBook.end(); sit++)
		delete (*sit);
	_spellBook.clear();
	std::cout << this->getName() + ": My job here is done!" << std::endl;
}

void	Warlock::learnSpell(const ASpell *toLearn) {
	std::vector<ASpell*>::iterator	sit = _spellBook.begin();
	for (; sit != _spellBook.end(); sit++)
	{
		if ((*sit)->getName() == (*toLearn).getName())
			return ;
	}
	this->_spellBook.push_back(toLearn->clone());
}

void	Warlock::forgetSpell(std::string toForget) {
	std::vector<ASpell*>::iterator	sit = _spellBook.begin();
	for (; sit != _spellBook.end();)
	{
		if ((*sit)->getName() == toForget)
		{
			delete (*sit);
			sit = _spellBook.erase(sit);
		}
		else
			sit++;
	}
}

void	Warlock::launchSpell(std::string toLaunch, ATarget &target) {
	std::vector<ASpell*>::iterator	sit = _spellBook.begin();
	for (; sit != _spellBook.end(); sit++)
	{
		if ((*sit)->getName() == toLaunch)
		{
			(*sit)->launch(target);
			return ;
		}
	}
}

