#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	std::vector<ASpell*>::iterator sit = _spellList.begin();
	for(; sit != _spellList.end(); sit++)
	{
		delete (*sit);
	}
	this->_spellList.clear();
}

void	SpellBook::learnSpell(ASpell* toLearn)
{
	/* check if spell already in list */
	std::vector<ASpell*>::iterator sit = _spellList.begin();
	for(; sit != _spellList.end(); sit++)
	{
		if ((*sit)->getName() == (*toLearn).getName())
			return;
		_spellList.push_back(toLearn->clone());
	}
}

void	SpellBook::forgetSpell(std::string const &toForget) {
	std::vector<ASpell*>::iterator	sit = _spellList.begin();
	for(; sit != _spellList.end(); sit++)
	{
		if ((*sit)->getName() == toForget)
		{
			delete (*sit);
			sit = this->_spellList.erase(sit);
		}
	}
}

ASpell	*SpellBook::createSpell(std::string const &toCreate) {
	std::vector<ASpell*>::iterator sit = _spellList.begin();
	for(; sit != _spellList.end(); sit++)
	{
		if ((*sit)->getName() == toCreate)
		{
			return (*sit);
		}
	}
	return nullptr;
}
