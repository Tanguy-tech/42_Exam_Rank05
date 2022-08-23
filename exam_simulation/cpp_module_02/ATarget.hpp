#pragma once

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		std::string	getType() const {return this->_type;}

		virtual ATarget *clone() const = 0;

		void		getHitBySpell(const ASpell &spell) const;		

	private:
		std::string	_type;
};

#endif
