#include <iostream>
#include <string>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void	learnTargetType(ATarget*toLearn);
		void	forgetTargetType(std::string const &toForget);
		ATarget	*createTarget(std::string const &toCreate);

	private:
		std::vector<ATarget*>	_types;
		
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
};
