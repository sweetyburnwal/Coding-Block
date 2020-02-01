#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q)
{
	if(q.empty())
	{
		return;
	}
	
	int frontElement=q.front();
	q.pop();
	reverseQueue(q);
	q.push(frontElement);
}

void print(queue<int> q)
{
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
}

int main()
{
	queue<int> q;
	
	q.push(4);
	q.push(3);
	q.push(2);
	q.push(1);
	
	print(q);
	reverseQueue(q);
	print(q);
	
	return 0;
}
