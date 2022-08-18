#pragma once

#include <iostream>
#include <string>

class ASpell;

class ATarget
{
	public:

		ATarget();
		ATarget(std::string type);
		ATarget &operator=(const ATarget& other);
		ATarget(const ATarget& other);
		virtual ~ATarget();

		std::string const getType() const {return this->_type;}

		virtual ATarget *clone() const = 0;

		void	getHitBySpell(const ASpell& aspell) const;

	private:
		std::string	_type;
};

#include "ASpell.hpp"
