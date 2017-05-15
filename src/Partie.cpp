#include "Partie.hpp"
#include <iostream>

void Partie::play(std::string playerName,std::string playerMove){
	int x=rng(3);
	switch(x){
		case(0):
			lastAiMove="rock";
		break;
		case(1):
			lastAiMove="paper";
		break;
		case(2):
			lastAiMove="scissor";
		break;
	}
	lastResult=compareResult(playerMove,lastAiMove);
	LOG(INFO) << playerName<<";"<<lastResult<<";"<<playerMove<<";"<<lastAiMove<<"\n"; 
}
std::string Partie::getLastAiMove(){
	return lastAiMove;
}
std::string Partie::getLastResult(){
	return lastResult;
}
std::string compareResult(std::string playerMove,std::string aiMove){
	if(playerMove==aiMove)
		return "draw";
	if((playerMove=="rock" and aiMove=="scissor") or (playerMove=="paper" and aiMove=="rock") or (playerMove=="scissor" and aiMove=="paper"))
		return "win";
	return "lose";
}
