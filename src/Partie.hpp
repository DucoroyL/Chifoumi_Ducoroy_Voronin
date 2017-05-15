#ifndef PARTIE_HPP
#define PARTIE_HPP

#include <string>
#include "Random.hpp"
#include <glog/logging.h>
class Partie{
	private:
		std::string lastResult;//"win","lose","draw"
		std::string lastAiMove;//"rock","paper","scissor"
		Random rng;
	public:
		void play(std::string playerName,std::string playerMove);
		std::string getLastResult();
		std::string getLastAiMove(); 
};
std::string compareResult(std::string playerMove,std::string aiMove);
#endif
