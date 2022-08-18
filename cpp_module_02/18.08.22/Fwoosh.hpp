#include "ASpell.hpp"

#define FWOOSH_NAME "Fwoosh"
#define FWOOSH_EFFECTS "fwooshed"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();

		virtual ASpell *clone() const;
};
