#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator();	
		~TargetGenerator();

		void	learnTargetType(ATarget *);
		void	forgetTargetType(const std::string &);
		ATarget	*createTarget(const std::string &);

	
	private:
		std::vector<ATarget*>	_targets;

		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
	
};

#endif
