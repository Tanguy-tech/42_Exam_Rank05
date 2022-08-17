#include "ATarget.hpp"

#define DUMMY_TYPE "Target Practice Dummy"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();

		virtual ATarget *clone() const ;
};
