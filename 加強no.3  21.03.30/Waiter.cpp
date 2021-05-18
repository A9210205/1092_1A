#include "Waiter.h"

Waiter::Waiter()
{
	id = 0;
	name = "¡@";
}
Waiter::Waiter(int _id, string _n)
{
	id = _id;
	name = _n;
}
void Waiter::setName(string _n)
{
	name = _n;
}
void Waiter::setId(int _id)
{
	id = _id;
}
int Waiter::getId()
{
	return id;
}
string Waiter::getName()
{
	return name;
}
string Waiter::toString()
{
	stringstream ss;
	ss << "Waiter: " << name << " Staff ID:" << id;
	return ss.str();
}
