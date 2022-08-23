#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		
		std::string const	&getName() const {return this->_name;}
		std::string const	&getTitle() const {return this->_title;}

		void		setTitle(const std::string title) {this->_title = title;}

		void		introduce() const;

		void		learnSpell(const ASpell *spell);
		void		forgetSpell(const std::string spell);
		void		launchSpell(const std::string spell, const ATarget &target);
	
	private:
		std::string		_name;
		std::string		_title;
		std::vector<ASpell*>	_spellBook;

		Warlock();
		Warlock(const Warlock &other);
		Warlock	&operator=(const Warlock &other);
};

#endif
