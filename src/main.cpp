#include <iostream>

#include "Partie.hpp"
using namespace std;
int main(int argc, char ** argv){
	google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	google::InitGoogleLogging(argv[0]);
	string nom=argv[1]; 
	string choix; 
	Partie p;
	do{
		cout << "move(rock,paper,scissor,quit): ";
		cin >>choix;
		if(choix != "quit"){
			p.play(nom,choix);
		}
	}while(choix != "quit");	
	return 0;
}
