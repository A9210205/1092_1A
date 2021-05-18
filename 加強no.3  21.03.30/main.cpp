#include <iostream>
#include<string>
#include<sstream>
#include "Meal.h"
#include "Waiter.h"
#include "Order.h"
using namespace std;

int main()
{
	Order order[3];
	Waiter waiter[2];
	waiter[0] = Waiter(166, "Jhonny");
	waiter[1] = Waiter(233, "Tommy");
	for (int i = 0; i < 3; i++)
	{
		string dishName;
		int cal, time, staffID;
		while (true)
		{
			cin >> dishName;
			if (dishName == "-1")
			{
				break;
			}
			cin >> cal >> time;
			order[i].addNewOrder(Meal(dishName, cal, time));
		}
		cin >> staffID;
		order[i].setStaff(waiter[staffID]);
	}
	for (auto x : order)
		x.print();
}