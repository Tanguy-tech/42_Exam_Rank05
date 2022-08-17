#include "Dummy.hpp"

Dummy::Dummy() : ATarget(DUMMY_TYPE) {}

Dummy::~Dummy() {}

ATarget *Dummy::clone() const
{
    return (new Dummy());
}
