#include <iostream>
#include <boost/asio/ip/host_name.hpp>

int main ( int argc, char ** argv ) {
	const auto host_name = boost::asio::ip::host_name();
	std::cout << "Hello, this is the pumpkin person '" << host_name << "'." << std::endl;	
	return 0;
}
