#include "Order.h"

Order::Order()
{}
void Order::setName(string _n)
{
	name = _n;
}
string Order::getName()
{
	return name;
}
void Order::setStaff(Waiter _staff)
{
	staff = _staff;
}
Waiter Order::getStaff()
{
	return staff;
}
void Order::addNewOrder(Meal newOrder)
{
	arr[index] = newOrder;
	index++;
}
int Order::totalTime()
{
	int total = 0;
	for (int i = 0; i < index; i++)
	{
		total += arr[i].getTime();
	}
	return total;
}
int Order::totalCalorie()
{
	int total = 0;
	for (int i = 0; i < index; i++)
	{
		total += arr[i].getCalorie();
	}
	return total;
}
void Order::print()
{
	cout << "Order:" << name << endl;
	cout << staff.toString() << endl;
	cout << "Meals:" << endl;
	for (int i = 0; i < index; i++)
	{
		cout << arr[i].toString() << endl;
	}
	cout << "Total Calorie: " << totalCalorie() << " Time: " << totalTime() << endl << endl;
}
