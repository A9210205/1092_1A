#include "Meal.h"

Meal::Meal()
{
	name = " ";
	calorie = 0;
	time = 0;
}
Meal::Meal(string name, int calorie, int time)
{
	this->name = name;
	this->calorie = calorie;
	this->time = time;
}
void Meal::setName(string _n)
{
	name = _n;
}
void Meal::setCalorie(int _c)
{
	calorie = _c;
}
void Meal::setTime(int _t)
{
	time = _t;
}
string Meal::getName()
{
	return name;
}
int Meal::getCalorie()
{
	return calorie;
}
int Meal::getTime()
{
	return time;
}
string Meal::toString()
{
	stringstream ss;
	ss << name << " Calorie: " << calorie;
	return ss.str();
}
