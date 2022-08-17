#pragma once

#include <iostream>
#include <string>

class ASpell;

class ATarget
{
	public:
		ATarget(std::string type);
		~ATarget();

		std::string const getType() const {return this->_type;}

		virtual ATarget *clone() const = 0;

		void	getHitBySpell(const ASpell& aspell) const;

	private:
		std::string	_type;

		ATarget();
		ATarget(const ATarget& other);
		ATarget &operator=(const ATarget& other);
};

#include "ASpell.hpp"
