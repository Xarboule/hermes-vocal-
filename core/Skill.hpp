#include <boost/algorithm/string.hpp>
#include<iostream>
#include<vector>
#include<string>

#ifndef SKILL
#define SKILL

using namespace std;

class Skill
{
	private:
		vector<string> keyphrases, superwords, badwords, misckeyphrases, misckeywords;

	public:
		Skill (vector<string>, vector<string>, vector<string>);
		bool ask (string);
		int similitude(string);
};


#endif
