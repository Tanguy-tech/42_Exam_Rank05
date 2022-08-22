#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const &getName() const {return this->_name;}
		std::string const &getTitle() const {return this->_title;}

		void		setTitle(const std::string title) {this->_title = title;}

		void		introduce() const;

		void		learnSpell(const ASpell *toLearn);
		void		forgetSpell(std::string toForget);
		void		launchSpell(std::string toLaunch, ATarget &target);

	private:
		std::string		_name;
		std::string		_title;
		std::vector<ASpell*>	_spellBook;

		Warlock();
		Warlock(const Warlock &other);
		Warlock	&operator=(const Warlock &other);
};

#endif
