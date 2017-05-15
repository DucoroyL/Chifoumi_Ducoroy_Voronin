#include <iostream>

#include "Partie.hpp"
using namespace std;
int main(int argc, char ** argv){
	if(argc == 1){
		cerr<< "Il manque un argument"<<endl;
		return 0;
	}
	/// initialisation des logs
	google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	google::InitGoogleLogging(argv[0]);
	string nom=argv[1]; 
	string choix; 
	Partie p;
	do{
		cout << "move(rock,paper,scissor,quit): ";
		cin >>choix;
		if(choix != "quit" and (choix=="rock" or choix=="paper" or choix=="scissor")){
			p.play(nom,choix);
			cout<<p.getLastResult()<<"("<<choix<<"-"<<p.getLastAiMove()<<")"<<endl;
		}
	}while(choix != "quit");	
	return 0;
}
