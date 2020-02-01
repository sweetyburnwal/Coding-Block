#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	
	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertionAtFront(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
		return;
	}
	node* n=new node(d);
	n->next=head;
	head=n;
}

void insertionAtEnd(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
		return;
	}
	node* n=new node(d);
	tail->next=n;
	tail=n;
}

int length(node* head)
{
	int len=0;
	while(head)
	{
		len++;
		head=head->next;
	}
	return len;
}

void insertionAtPos(node* &head,node* &tail,int d,int p)
{
	if(p==0)
	{
		insertionAtFront(head,tail,d);
		return;
	}
	else if(p>=length(head))
	{
		insertionAtEnd(head,tail,d);
		return;
	}
	int pos=1;
	node* temp=head;
	node* n=new node(d);
	while(pos<p)
    {
    	temp=temp->next;
    	pos++;
	}
	n->next=temp->next;
	temp->next=n;
}

void deletionAtFront(node* &head,node* &tail)
{
	if(head==NULL)
	{
		return;
	}
	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
		return;
	}
	else
	{
		node* temp=head;
		head=head->next;
		delete temp;
	}
}

void deletionAtEnd(node* &head,node* &tail)
{
	if(head==NULL)
	{
		return;
	}
	else if(head==tail)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}
	else
	{
		node* temp=head;
		while(temp->next!=tail)
		{
			temp=temp->next;
		}
		temp->next=NULL;
		delete tail;
		tail=temp;
	}
}

void deletionAtPos(node* &head,node* &tail,int p)
{
	if(p==0)
	{
		deletionAtFront(head,tail);
		return;
	}
	else if(p==length(head)-1)
	{
		deletionAtEnd(head,tail);
		return;
	}
	else if(p>=length(head))
	{
		return;
	}
	else
	{
		node* temp=head;
		int pos=1;
		while(pos<p)
		{
			temp=temp->next;
			pos++;
		}
		node* n=temp->next;
		temp->next=n->next;
		delete n;
	}
}

node* search(node* head,int d)
{
	while(head)
	{
		if(head->data==d)
		{
			return head;
		}
		head=head->next;
	}
	return NULL;
}

node* searchRec(node* head,int d)
{
	if(head==NULL)
	{
		return NULL;
	}
	if(head->data==d)
	{
		return head;
	}
	return searchRec(head->next,d);
}

node* mid(node* head)
{
	node* slow=head;
	node* fast=head->next;
	
	while(fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

node* merge(node* head1,node* head2)
{
	if(head1==NULL)
	{
		return head2;
	}
	else if(head2==NULL)
	{
		return head1;
	}
	else
	{
		node* nhead=NULL;
		if(head1->data<head2->data)
		{
			nhead=head1;
			nhead->next=merge(head1->next,head2);
		}
		else
		{
			nhead=head2;
			nhead->next=merge(head1,head2->next);
		}
		return nhead;
	}
}

node* mergesort(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;
	
	a=mergesort(a);
	b=mergesort(b);
	
	node* nhead=merge(a,b);
	return nhead;
}

void bubblesort(node* &head)
{
	int l=length(head);
	node* curr;
	node* prev;
	for(int i=0;i<l-1;i++)
	{
		curr=head;
		prev=NULL;
		
		while(curr && curr->next)
		{
			node* n=curr->next;
			if(curr->data>n->data)
			{
				if(prev==NULL)
				{
					curr->next=n->next;
					n->next=curr;
					prev=n;
					head=n;
				}
				else
				{
					curr->next=n->next;
					n->next=curr;
					prev->next=n;
					prev=n;
				}
			}
			else
			{
				prev=curr;
				curr=curr->next;
				
			}
		}
	}
}

void createCycle(node* head)
{
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head->next->next;
}

bool isCyclic(node* head)
{
	node* slow=head;
	node* fast=head;
	
	while(fast)
	{
		fast=fast->next;
		if(fast)
		{
			fast=fast->next;
			slow=slow->next;
			if(slow==fast)
			{
				return true;
			}
		}
	}
	return false;
}

void breakCycle(node* head)
{
	node* slow=head;
	node* fast=head;
	
	while(fast)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(slow=fast)
		{
			break;
		}
	}
	node* prev=head;
	while(prev->next!=fast)
	{
		prev=prev->next;
	}
	slow=head;
	while(slow!=fast)
	{
		slow=slow->next;
		fast=fast->next;
		prev=prev->next;
	}
	prev->next=NULL;
}

node* reversal(node* head)
{
	node* curr=head;
	node* prev=NULL;
	
	while(curr)
	{
		node* n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
	}
	return prev;
}

void print(node* head)
{
	while(head!=NULL)  //same as while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main()
{
	//node* head=NULL;
	//node* tail=NULL;
	
	node* head1=NULL;
	node* tail1=NULL;
	node* head2=NULL;
	node* tail2=NULL;
	
	insertionAtFront(head1,tail1,7);
    insertionAtFront(head1,tail1,6);
	insertionAtFront(head1,tail1,5);
	insertionAtFront(head1,tail1,4);
	insertionAtFront(head1,tail1,3);
	insertionAtFront(head1,tail1,2);
	insertionAtFront(head1,tail1,1);
	
//	insertionAtFront(head1,tail1,34);
//	insertionAtFront(head1,tail1,25);
//	insertionAtFront(head1,tail1,11);
	//insertionAtFront(head1,tail1,100);
	//insertionAtFront(head1,tail1,121);
	//insertionAtFront(head1,tail1,99);
	
	createCycle(head1);
	if(isCyclic(head1))
	{
		cout<<"is cyclic"<<endl;
		breakCycle(head1);
		print(head1);
		cout<<endl;
	}
	else
	{
		cout<<"not cyclic"<<endl;
	}
	
//	print(head1);
//	cout<<endl;
	
//	bubblesort(head1);
//	print(head1);
//	cout<<endl;
	
	//node* nhead=reversal(head1);
	//print(nhead);
	//cout<<endl;
	
	//insertionAtFront(head2,tail2,23);
	//insertionAtFront(head2,tail2,19);
	//insertionAtFront(head2,tail2,10);
	
	//node* nhead=mergesort(head1);
	
	//print(nhead);
	//cout<<endl;
	
	//print(head2);
	//cout<<endl;
	
	//node* nhead=merge(head1,head2);
	
	//print(nhead);
	//cout<<endl;
	
	//insertionAtFront(head,tail,3);
	//insertionAtFront(head,tail,2);
	//insertionAtFront(head,tail,1);
	//insertionAtEnd(head,tail,4);
	//insertionAtEnd(head,tail,5);
	//insertionAtEnd(head,tail,6);
	//insertionAtPos(head,tail,0,0);
	//insertionAtPos(head,tail,7,7);
	//insertionAtPos(head,tail,11,3);
	
	//print(head);
	//cout<<endl;
	
	//cout<<mid(head)->data<<endl;
	//cout<<length(head)<<endl;
	
	//deletionAtPos(head,tail,0);
	//deletionAtPos(head,tail,8);
	//deletionAtPos(head,tail,3);
	
	//print(head);
	//cout<<endl;
	
	//int d;
	//cin>>d;
	//node* n=search(head,d);
	//if(n)
	//{
	//	cout<<n->data<<endl;
	//}
	//else
	//{
	//	cout<<"not found"<<endl;
	//}
	
	//n=searchRec(head,d)
	//if(n)
	//{
	//	cout<<n->data<<endl;	
	//}
	//else
	//{
	//	cout<<"not found"<<endl;
	//}
	
	return 0;
}
