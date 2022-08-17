#pragma once

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
	public:
		/* COPILEN FORM */
		ASpell(std::string name, std::string effects);
		virtual	~ASpell();

		/* Getters */
		std::string	const &getName() const {return this->_name;}
		std::string	const &getEffects() const {return this->_effects;}

		virtual ASpell *clone() const = 0;

		void	launch(const ATarget& atarget) const;

	private:
		std::string	_name;
		std::string	_effects;

		ASpell();
		ASpell(const ASpell &other);
		ASpell	&operator=(const ASpell &other);
};

#include "ATarget.hpp"
