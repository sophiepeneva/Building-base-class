# Building-base-class

#include<iostream>
#include "House.h"

using namespace std;

int main()
{
	House myHouse(30, 75, 8, 3, "Sophie");
	House neighbourHouse(40, 70, 8, 4, "John");

	cout << myHouse << endl;
	cout << neighbourHouse << endl;

	cout << (Building(myHouse) < Building(neighbourHouse)) << endl;
	cout << (myHouse < neighbourHouse) << endl;
	system("pause");
}
