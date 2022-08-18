#include "ATarget.hpp"

#define DUMMY_TYPE "Target Practice Dummy"

class Dummy : public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();

		virtual ATarget *clone() const ;
};
