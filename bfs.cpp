#include<iostream>
#include<queue>
using namespace std;
struct node{
	int n;
	int h;
	int vis;
	node *left, *right;} * root;
void print_i(node *p);
void populate( int n)
{
	if(root==NULL) {
		root=new(node);
		root->n=n; root->h=0; root->vis=0;
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
		q->h=0;
		q->vis=0;
		q->left=q->right=NULL;
}

void print_i(node *p)
{
	if(!p) return;
	print_i(p->left);
	cout<<p->n<<"_";
	print_i(p->right);
}

main()
{
	queue <node*> Q;
	int i;
/*	for(i=0;i<10;i++) 
	{
		populate((i+12)%10);
	}*/
	populate(60);
	populate(54);
	populate(67);
	populate(50);
	populate(53);
	populate(70);
	node *p=root;

	cout<<"\n Inorder printing"<<endl;
	print_i(root);
	cout<<endl;

	p->right->left=p->left->left->right;
	p=root;
	Q.push(root);
	int j=0;
	while(Q.size())
	{

		p=Q.front();
		if(p->vis==0){
			p->vis=1;
		if(j!=p->h) cout<<endl;
		Q.pop();
		if(p->left) { p->left->h= 1+p->h; Q.push(p->left);}
		if(p->right) { p->right->h= 1+ p->h; Q.push(p->right);}
		cout<<p->n<<" ";
		j=p->h;}
		else Q.pop();


	}

}
	

