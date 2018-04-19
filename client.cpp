#include<iostream>

using namespace std;

string sendOrder(const string &order, string &result){
	//TODO
	cout << "Order sent : " << order << "\n" << endl;
	return order;
}

int main(){
	cout << "----- CLI Hermes Vocal Client -----\n\n" << endl;

	string order, result;
	string & reforder = order;
	string & refresult = result;
	
	while(42){
		cout << "Order : ";
		cin >> reforder;
		if(order.compare("quit")){
			sendOrder(reforder, refresult);
		}
		else {
			return EXIT_SUCCESS;
		}
	}
}
