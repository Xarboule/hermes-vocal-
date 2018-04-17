#include<core/Skill.hpp>
#include<core/core.hpp>

#define OFFLINE_MODE

#ifdef OFFLINE_MODE
void waitForOrder(string &order){
	std::cout << "Order : ";
	cin >> order;
}
#else
void waitForOrder(string &order){
	//TODO
	return EXIT_FAILURE;
}
#endif

int main(){
	std::cout << "--- Vocal Server ---\n\n" << std::endl;
	string order, result;
	string & refOrder = order;	
	string & refResult = result;

	while(42){
		waitForOrder(refOrder);
		executeOrder(refOrder, refResult);
		std::cout << result << "\n" << std::endl;
		
	}

	std::vector<string> keywords, superwords, badwords;
	Skill skill(keywords, superwords, badwords);

	return EXIT_SUCCESS;
}
