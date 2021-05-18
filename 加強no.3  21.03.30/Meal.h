#ifndef MEAL_H
#define MEAL_H
#include<string>
#include<sstream>
using namespace std;

class Meal
{
private:
	string name;
	int calorie;
	int time;
public:
	Meal();
	Meal(string, int, int);
	void setName(string);
	void setCalorie(int);
	void setTime(int);
	string getName();
	int getCalorie();
	int getTime();
	string toString();
};
#endif

