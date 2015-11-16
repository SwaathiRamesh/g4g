#include<iostream>
using namespace std;
struct node{
	int n;
	node *left, *right;} * root;
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

void print_i(node *p)
{
	if(!p) return;
	print_i(p->left);
	cout<<p->n<<endl;
	print_i(p->right);
}

void print_pre(node *p)
{
	if(!p) return;
	cout<<p->n<<endl;
	print_pre(p->left);
	print_pre(p->right);

}
void print_post(node *p)
{
		if(!p) return;
		print_post(p->left);
		print_post(p->right);
		cout<<p->n<<endl;
	}
main()
{
populate(25);
populate(40);
populate(60);
populate(10);
populate(31);
populate(59);
populate(63);
cout<<"\n Inorder traversal\n";
print_i(root);
cout<<"\n preorder\n";
print_pre(root);
cout<<"\n Postorder \n";
print_post(root);
}
