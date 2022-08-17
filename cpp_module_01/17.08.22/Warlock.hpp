#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	public:
		/* COPILEN FORM => Constructors & Destructor */
		Warlock(std::string name, std::string title);
		~Warlock();

		/* Getters */
		std::string		const getName() const {return this->_name;}
		std::string		const getTitle() const {return this->_title;}

		/* Setter */
		void				setTitle(std::string const &newTitle) {this->_title = newTitle;}

		/* Other functions */
		void				introduce() const;

		void				learnSpell(ASpell *aspell);
		void				forgetSpell(std::string toForget);
		void				launchSpell(std::string name, const ATarget &target);

		
	private:
		std::string		_name;
		std::string		_title;

		std::map<std::string , ASpell*> SpellMap;

		Warlock();
		Warlock(const Warlock& other);
		Warlock &operator=(const Warlock& other);
};
