#include <iostream>
#include <string>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		
		void	setTitle(std::string title) {this->_title = title;}		

		std::string const getName() const {return this->_name;}
		std::string const getTitle() const {return this->_title;}

		void	introduce() const;

		void	learnSpell(const ASpell *spell);
		void	forgetSpell(std::string toForget);
		void	launchSpell(std::string toLaunch, ATarget &target);
	private:
		std::string		_name;
		std::string		_title;
		std::vector<ASpell*>	_spellBook;

		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
};
