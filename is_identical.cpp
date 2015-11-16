#include<iostream>
using namespace std;
struct node{
	int n;
	node *left, *right;} ;
void populate( int n, node **root)
{
	if(*root==NULL) {
		*root=new(node);
		node *p=*root;
		p->n=n;
		p->left=p->right=NULL;
		return;		
	}
	node *p=*root;
	int t=0;
	node *q=*root;//the tracker
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

void print_i(node *p)
{
	if(!p) return;
	print_i(p->left);
	cout<<p->n<<" ";
	print_i(p->right);
}
int is_identical( node *p, node *q)
{
	if(!p && !q) return 1;
	if(!p) return 0;
	if(!q) return 0;
	if(p->n == q->n ) return is_identical(p->left, q->left)&&is_identical(p->right, q->right);
	return 0;
}
main()
{
node *r1=NULL, *r2=NULL, *r3=NULL;
int i;
for(i=0;i<10;i++)
{
	populate(i, &r1);
	populate(i, &r2);
	populate(i%9, &r3);
}
	cout<<"\n First Tree "<<endl;
	print_i(r1);
	cout<<"\n Second tree "<<endl;
	print_i(r2);
	cout<<"\n Third tree "<<endl;
	print_i(r3);
	if(is_identical(r3, r2)) cout<<"Yes";
	else cout<<"No";

}
