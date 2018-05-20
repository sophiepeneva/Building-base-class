# Building-base-class

#include "Building.h"



Building::Building(int height, int area, int floors) : m_height(height), m_area(area), m_floors(floors)
{}

bool Building::operator<(const Building& b)
{
	if (getTotalArea() < b.getTotalArea())cout << "The first building's total area is smaller" << endl;
	else { cout << "The first building's total area is larger" << endl; }
	return (getTotalArea() < b.getTotalArea());
}

ostream& operator<<(ostream& os, const Building& b)
{
	os << "This building is " << b.m_height << " meter with an area of "
		<< b.m_area << " meters and " << b.m_floors << " floors.";
	return os;
}
