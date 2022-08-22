#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"

class SpellBook
{	
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell*);
		void	forgetSpell(const std::string &);
		ASpell	*createSpell(const std::string &);

	private:
		std::vector<ASpell*>	_spells;
		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);
};

#endif
