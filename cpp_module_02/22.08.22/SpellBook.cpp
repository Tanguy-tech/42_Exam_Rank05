#include "SpellBook.hpp"

SpellBook::SpellBook() {}

void	SpellBook::learnSpell(ASpell* spell) {
	std::vector<ASpell*>::iterator	sit = _spells.begin();
	for (; sit != _spells.end(); sit++)
	{
		if ((*sit)->getName() == (*spell).getName())
			return ;
	}
	this->_spells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string &spell) {
	std::vector<ASpell*>::iterator	sit = _spells.begin();
	for (; sit != _spells.end();)
	{
		if ((*sit)->getName() == spell)
		{
			delete (*sit);
			sit = _spells.erase(sit);
		}
		else
			sit++;
	}
}

ASpell	*SpellBook::createSpell(const std::string &spell) {
	std::vector<ASpell*>::iterator	sit = _spells.begin();
	for (; sit != _spells.end(); sit++)
	{
		if ((*sit)->getName() == spell)
			return (*sit)->clone();
	}
	return NULL;
}
