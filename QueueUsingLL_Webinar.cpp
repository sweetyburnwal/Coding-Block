#include<iostream>
#include "queue.h"
using namespace std;

int main()
{
	queue q;
	
	q.push(3);
	q.push(2);
	q.push(1);
	
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}
