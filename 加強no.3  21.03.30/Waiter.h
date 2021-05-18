#ifndef WAITER_H
#define WAITER_H
#include<string>
#include<sstream>
using namespace std;

class Waiter
{
private:
	string name;
	int id;
public:
	Waiter();
	Waiter(int, string);
	void setName(string);
	void setId(int);
	int getId();
	string getName();
	string toString();
};
#endif


