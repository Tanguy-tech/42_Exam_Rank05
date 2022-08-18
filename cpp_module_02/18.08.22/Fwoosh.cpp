#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell(FWOOSH_NAME, FWOOSH_EFFECTS) {}

Fwoosh::~Fwoosh() {}

ASpell *Fwoosh::clone() const
{
    return (new Fwoosh());
}
