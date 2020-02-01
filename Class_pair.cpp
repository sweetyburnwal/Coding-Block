#include<iostream>
using namespace std;

class pair
{
public:
	int x,y;
	pair(int x1,int y1):x(x1),y(y1)
	{}
	
	bool operator>(pair p)const
	{
		if(x>=p.x && y>=p.y)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	pair p1(5,6),p2(2,3);
	if(p1>p2)
	{
		cout<<"p1 is greater than p2"<<endl;
	}
	else
	{
		cout<<"p2 is greater than p1"<<endl;
	}
	return 0;
}
