#pragma once

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ATarget.hpp"
class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
		virtual ~ASpell();

		std::string	getName() const {return this->_name;}
		std::string	getEffects() const {return this->_effects;}

		virtual ASpell *clone() const = 0;

		void		launch(const ATarget &target) const;

	private:
		std::string	_name;
		std::string	_effects;
};

#endif
