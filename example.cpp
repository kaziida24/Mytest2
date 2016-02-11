#include <iostream>
#include <boost/format.hpp>
using namespace std;

int main(int argc, char* argv[])
{
	float f = 4.0;
	cout << boost::format("f = %4.2f\n") % f;
	return 0;
}
