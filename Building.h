# Building-base-class

#pragma once
#include<iostream>

using namespace std;

class Building
{
public:
	Building(int height = 0, int area = 0, int floors = 0);
	~Building() {}

	void setHeight(int height) { m_height = height; }
	void setArea(int area) { m_area = area; }
	void setFloors(int floors) { m_floors = floors; }

	int getHeight() const { return m_height; }
	int getArea() const { return m_area; }
	int getFloors() const { return m_floors; }

	int getTotalArea() const { return m_area * m_floors; }

	virtual bool operator<(const Building& b);
	
	friend ostream& operator<<(ostream& os, const Building& b);
private:
	int m_height;
	int m_area;
	int m_floors;
};

