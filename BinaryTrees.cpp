#include<iostream>
#include<queue>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;
    
	//constructor	
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* createTree()
{
//	if(d==-1)
//	{
//		return NULL;
//	}
	
	int d;
	cin>>d;
	
	if(d==-1)
	{
		return NULL;
	}
	
	node* root=new node(d);
	cout<<"enter left child of "<<d<<" : ";
	root->left=createTree();
	cout<<"enter right child of "<<d<<" : ";
	root->right=createTree();
	
	return root;
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int leftChildHeight=height(root->left);
	int rightChildHeight=height(root->right);
	
	int h=max(leftChildHeight,rightChildHeight)+1;
	return h;
}

//count total no of nodes in a tree
int count(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int leftCount=count(root->left);
	int rightCount=count(root->right);
	
	int totalCount=leftCount+rightCount+1;
	return totalCount;
}

int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int option1=height(root->left)+height(root->right);
	int option2=diameter(root->left);
	int option3=diameter(root->right);
	
	int ans=max(option1,max(option2,option3));
	return ans;
}

class pair
{
public:
	int Height;
	int Diameter;
};

pair fastDiameter(node* root)
{
	pair p;
	if(root==NULL)
	{
		p.Height=0;
		p.Diameter=0;
		return p;
	}
	
	pair left=fastDiameter(root->left);
	pair right=fastDiameter(root->right);
	
	p.Height=max(left.height,right.height)+1;
	
	int option1=left.Height+right.Height;
	int option2=left.Diameter;
	int option3=right.Diameter;
	
	p.Diameter=max(option1,max(option2,option3));
	
	return p;
}

void levelOrder(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		node* n=q.front();
		q.pop();
		
		if(n==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{ 
		    cout<<n->data<<" ";
		    if(n->left)
		    {
		     	q.push(n->left);
	     	}
	    	if(n->right)
	     	{
		    	q.push(n->right);
	     	}
	    }
	}
}

void mirror(node* root)
{
	if(!root)  //same as if(root==NULL)
	{
		return;
	}
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}

//generation of a tree from inorder and preorder traversal
int i=0;                               //i=n-1 for post order
int pre[]={1,2,4,8,5,9,3,6,7};

node* builtTree(int *in,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}
	int key=pre[i];
	i++;                               //i-- for post order
	int k=-1;
	for(int j=s;j<=e;j++)
	{
		if(in[j]==key)
		{
			k=j;
			break;
		}
	}
	node* root=new node(key);
	root->left=builtTree(in,s,k-1);
	root->right=builtTree(in,k+1,e);
	
	return root;
}

//check whether binary tree is binary search tree or not
bool isBST(node* root,int min=INT_MIN,int max=INT_MAX)
{
	if(root==NULL)
	{
		return true;
	}
	if((min<=root->data && root->data<max) && isBST(root->left,min,root->data) && isBST(root->right,root->data+1,max))
	{
		return true;
	}
	return false;
}

node* insertInBST(node* root,int data)
{
	if(root==NULL)
	{
		node* r=new node(data);
		return r;
	}
	else if(root->data<data)
	{
		root->right=insertInBST(root->right,data);
	}
	else
	{
		root->left=insertInBST(root->left,data);
	}
	return root;
}

//construct a BST 
node* createBST()
{
	int data;
	cin>>data;
	
	node* root=NULL;
	while(data!=-1)
	{
		root=insertInBST(root,data);
		cin>>data;
	}
	return root;
}

node* arrToBST(int *arr,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}
	
	int mid=s+e/2;
	node* root=new node(arr[mid]);
	root->left=arrToBST(arr,s,mid-1);
	root->right=arrToBST(arr,mid+1,e);
	
	return root;
}


int main()
{
//	node* root=createTree();

	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(in)/sizeof(int);
	
	node* root=arrToBST(arr,0,n-1);
	
	levelOrder(root);
	
//	int in[]={8,4,2,9,5,1,6,3,7};
//	int n=sizeof(in)/sizeof(int);
	
//	node* root=builtTree(in,0,n-1);
//	levelOrder(root);
	
//	node* root=createBST();
	
//	levelOrder(root);
	
//	if(isBST(root))
//	{
//		cout<<"Yes"<<endl;
//	}
//	else
//	{
//		cout<<"No"<<endl;
//	}
	
//	cout<<"Preorder traversal is : "<<endl;
//	preorder(root);
//	cout<<endl;
//	cout<<endl;
	
//	cout<<"Postorder traversal is : "<<endl;
//	postorder(root);
//	cout<<endl;
//	cout<<endl;
	
//	cout<<"Inorder traversal is : "<<endl;
//	inorder(root);
//	cout<<endl;
//	cout<<endl;
	
//	cout<<"Height of the tree is : ";
//	cout<<height(root);
//	cout<<endl;
//	cout<<endl;
	
//	cout<<"Total no of nodes in a tree is : ";
//	cout<<count(root);
//	cout<<endl;
//	cout<<endl;
	
//	pair p=fastDiameter(root);
//	cout<<"Height using fastDiameter is : "<<p.Height<<endl;
//	cout<<"Diameter using fastDiameter is : "<<p.Diameter<<endl;
	
//	cout<<"Level order traversal is : "<<endl;
//	levelOrder(root);
//	cout<<endl;
//	cout<<endl;
	
//	cout<<"mirror image of level order traversal is : "<<endl;
//	mirror(root);
//	cout<<endl;
    
//  levelOrder(root);
    
//  mirror(root);
    
//  cout<<"mirror image "<<endl;
//  levelOrder(root);
	
	return 0;
}
