#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook();
		virtual ~SpellBook();
		
		void	learnSpell(ASpell*toLearn);
		void	forgetSpell(std::string const &toForget);
		ASpell	*createSpell(std::string const &toCreate);

	private:
		std::vector<ASpell*>	_spellList;

		SpellBook(const SpellBook& other);
		SpellBook &operator=(const SpellBook& other);
};
