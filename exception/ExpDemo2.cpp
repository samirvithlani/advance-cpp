#include<iostream>
using namespace std;

int main()
{
  
	try {
	throw 10/0;
	}
	catch (exception *e) {
		cout << "Caught "<<e;
	}
	return 0;
}
