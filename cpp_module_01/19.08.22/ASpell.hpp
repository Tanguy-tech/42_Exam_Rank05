#pragma once

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
		virtual ~ASpell();

		std::string	const getName() const {return this->_name;}
		std::string	const getEffects() const {return this->_effects;}
	
		void		launch(const ATarget &target);		

		virtual	ASpell	*clone() const = 0;

	private:
		std::string	_name;
		std::string	_effects;
};

#include "ATarget.hpp"
