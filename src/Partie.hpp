#ifndef PARTIE_HPP
#define PARTIE_HPP

#include <string>
#include "Random.hpp"
#include <glog/logging.h>
class Partie{
	private:
		///resultat de la partie : "win","lose","draw"
		std::string lastResult;
		///coup de l'IA : "rock","paper","scissor"
		std::string lastAiMove;
		/// nombre généré aléatoirement nécessaire pour le choix du coup de l'IA et créer les logs
		Random rng;
	public:
		/// défini le coup de l'IA et appelle compareResult
		void play(std::string playerName,std::string playerMove);
		/// accesseur permet d'aller chercher la variable lastResult d'un objet Partie
		std::string getLastResult();
		/// accesseur permet d'aller chercher la variable lastAiMove d'un objet Partie 
		std::string getLastAiMove();
};
/// Retourne le resultat de la comparaise entre le coup du joueur et de  l'IA
std::string compareResult(std::string playerMove,std::string aiMove);
#endif
