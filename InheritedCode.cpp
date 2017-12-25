#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException : public exception {
public:
	BadLengthException(int length)
	{
		len = length;
	}

	virtual const int what()
	{
		return len;
	}
private:
	int len = 0;
};