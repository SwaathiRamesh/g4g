//tree size calculation
#include<iostream>
using namespace std;
struct node{
	int n;
	node * left, *right;
} * root;
void populate( int n)
{
	if(root==NULL) {
		root=new(node);
		root->n=n;
		root->left=root->right=NULL;
		return;		
	}
	node *p=root;
	int t=0;
	node *q=root;//the tracker
	while(p!=NULL)
	{
		if(p->n < n)
		{
			q=p;
			p=p->right;
			t=1;
		}
		else
		{
			q=p;
			p=p->left;
			t=0;
	}	}
	if(!t) {
		q->left=new(node);
		q=q->left;
	}
	else
	{	
		q->right=new(node);
		q=q->right;
	}
		q->n=n;
		q->left=q->right=NULL;
}


int size( node *p)
{
	if(!p) return 0;
	if(!p->left && !p->right) return 1;
	return 1+size(p->left)+size(p->right);
}
main()
{
	int i=0;
	for(i=0;i<19;i++) populate(23+i);
	cout<<"\n Size is "<<size(root)<<endl;
}

