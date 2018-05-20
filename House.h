# Building-base-class

#pragma once
#include "Building.h"
class House :
	public Building
{
public:
	House(int height = 0, int area = 0, int floors = 0, int rooms = 0, const char* ownersName = "MR. P");
	House(const House& h);
	House& operator=(const House & h);
	~House();

	int getRooms() const { return m_rooms; }
	char* getOwnersName() const { return m_ownersName; }

	void setRooms(int rooms) { m_rooms = rooms; }
	void setOwnersName(const char* ownerName);

	bool operator<(const House& h);
	friend ostream& operator<<(ostream& os, const House& h);
private:
	void Destroy();
	void Copy(const House& h);
	int m_rooms;
	char* m_ownersName;
};

