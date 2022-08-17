#include <iostream>
#include <string>

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

		
	private:
		std::string		_name;
		std::string		_title;

		Warlock();
		Warlock(const Warlock& other);
		Warlock &operator=(const Warlock& other);
};
