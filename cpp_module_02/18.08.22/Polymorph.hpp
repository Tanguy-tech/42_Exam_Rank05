#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph();
		virtual ~Polymorph();

		virtual ASpell *clone() const;
};
