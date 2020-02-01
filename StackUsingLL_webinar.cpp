#include <iostream>
#include "node.h"
using namespace std;

template<typename T>

class stack
{
	node<T>* head;
public:
	stack()
	{
		head=NULL;
	}
	
	//push()
	 void push(T d)
	 {
	 	//insertion at front/head
	 	node<T>* n=new node<T>(d);
	 	n->next=head;
	 	head=n;
	 }
	 
	 //pop()
	 void pop()
	 {
	 	//deletion at front
	 	if(head==NULL)
	 	{
	 		return;
		}
	 	node<T>* temp=head;
	 	head=head->next;
	 	delete temp;
	 }
	 
	 //top()
	 T top()
	 {
	 	return head->data;
	 }
	 
	 //empty()
	 bool empty()
	 {
	 	return head==NULL;
	 }
};

int main()
{
//	stack<int>s;
//	s.push(3);
//	s.push(2);
//	s.push(1);
	
	stack<char>s;
	s.push('C');
	s.push('B');
	s.push('A');
	
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
