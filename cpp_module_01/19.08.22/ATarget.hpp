#pragma once

#include <iostream>
#include <string>

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		~ATarget();

		std::string	const getType() const {return this->_type;}

		void		getHitBySpell(const ASpell &spell) const;

		virtual ATarget	*clone() const = 0;

	private:
		std::string	_type;
	
};


#include "ASpell.hpp"
