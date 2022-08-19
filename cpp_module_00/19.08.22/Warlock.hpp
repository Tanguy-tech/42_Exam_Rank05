#include <iostream>
#include <string>

class Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		
		void	setTitle(std::string title) {this->_title = title;}		

		std::string const getName() const {return this->_name;}
		std::string const getTitle() const {return this->_title;}

		void	introduce() const;

	private:
		std::string	_name;
		std::string	_title;
		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
};
