#include <iostream>
using namespace std;
class thing
{
private:
	int *x;
	int y, z;

public:
	//null constructor
	thing()
	{
		this->x = new int;
		*x = 0;
		this->y = 0;
		this->z = 0;
	}
	//parameterized constructor
	thing(int xx, int yy, int zz)
	{
		this->x = new int;
		*x = xx;
		this->y = yy;
		this->z = zz;
	}
	//copy
	thing(thing &clone)
	{
		this->x = new int;
		x = clone.x;
		this->y = clone.y;
		this->z = clone.z;
	}
	//setters
	void set(int x, int y, int z)
	{
		this->x = new int;
		x = x;
		this->y = y;
		this->z = z;
	}
	//getters
	int gety()
	{
		return this->y;
	}
	int getz()
	{
		return this->z;
	}
	void display()
	{
		cout << this->x << " ";
		cout << this->y << " ";
		cout << this->z << " ";
	}
	//delete function
	~thing()
	{
		delete x;
		x = NULL;
	}
};  
