#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();

		virtual ATarget *clone() const;
};

#endif
