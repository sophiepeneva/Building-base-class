# Building-base-class

#include "House.h"



House::House(int height, int area, int floors, int rooms, const char* ownersName) : Building(height,area,floors), m_rooms(rooms)
{
	setOwnersName(ownersName);
}


House::~House()
{
	Destroy();
}


House::House(const House& h)
{
	Copy(h);
}


House& House::operator=(const House & h)
{
	if(this!=&h)
	{
		Destroy();
		Copy(h);
	}
	return *this;
}


void House::Destroy()
{
	delete[] m_ownersName;
}

void House::setOwnersName(const char* ownerName)
{
	m_ownersName = new char[strlen(ownerName) + 1];
	strcpy_s(m_ownersName, strlen(ownerName) + 1, ownerName);
}

void House::Copy(const House& h)
{
	setHeight(h.getHeight());
	setArea(h.getArea());
	setFloors(h.getFloors());
	setOwnersName(h.m_ownersName);
	m_rooms = h.m_rooms;
}


bool House::operator<(const House& h)
{
	if (m_rooms < h.m_rooms)cout << m_ownersName << "'s house has less rooms." << endl;
	else { cout << m_ownersName << "'s house has more rooms." << endl; }
	return (m_rooms < h.m_rooms);
}


ostream& operator<<(ostream& os, const House& h)
{
	os << (Building&)h;
	os << " This house also has " << h.m_rooms << " rooms and is owned by" << h.m_ownersName << ".";
	return os;
}
