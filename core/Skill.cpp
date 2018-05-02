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
	for (int i=0; i<keyphrases.size(); i++){
		if(!order.compare(keyphrases[i]))
		{
			return(true);
		}
	}
	return(false);
}

int Skill::similitude(string order){
	int ret = 0;
	vector<string> orderwords;
	for (int i=0; i<keyphrases.size(); i++){
		vector<string> words;	
		boost::split(words, keyphrases, boost::is_any_of(" "));
		orderwords.insert(orderwords.end(), words.begin(), words.end());
	}
	for (int i=0; i<orderWords.size(); i++){
			for (int j=0; j<this->misckeywords.size(); j++){
				if(!orderwords[i].compare(this->misckeywords[j])){
				ret += 1;
			}	
		}
		for (int k=0; k<this->superwords.size(); k++){
				if(!orderwords[i].compare(this->superwords[k])){
				ret += 20;
			}	
		
		}
		for (int l=0; l<this->badwords.size(); l++){
				if(!orderwords[i].compare(this->badwords[l])){
				ret -= 20;
			}	
		
		}
	}
}
