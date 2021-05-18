#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include "Meal.h"
#include "Waiter.h"
using namespace std;

class Order
{
private:
	string name;
	int index = 0;
	Meal arr[10];
	Waiter staff;
public:
	Order();
	void setName(string _n);
	string getName();
	void setStaff(Waiter _staff);
	Waiter getStaff();
	void addNewOrder(Meal newOrder);
	int totalTime();
	int totalCalorie();
	void print();
};
#endif

