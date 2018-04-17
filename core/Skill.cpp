#include<Skill.hpp>

Skill::Skill(vector<string> keyphrases, 
		vector<string> superwords, 
		vector<string> badwords){

	this->keyphrases = keyphrases;
	this->superwords = superwords;
	this->badwords = badwords;
	this->misckeywords = {};
	cout << "SKILL OK" << endl;
}

bool Skill::ask(string order){
	return(true);
}
