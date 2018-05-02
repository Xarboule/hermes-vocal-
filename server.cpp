#include<core/core.hpp>
#include<iostream>
#include<boost/asio.hpp>

using namespace boost::asio;
using namespace boost::asio::ip;

#define OFFLINE_MODE

#ifdef OFFLINE_MODE
void waitForOrder(string &order){
	std::cout << "Order : ";
	cin >> order;
}
#else

io_service ioservice;
tcp::resolver resolv{ioservice};
tcp::socket tcp_socket{ioservice};
std::array<char, 4096> bytes;

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
