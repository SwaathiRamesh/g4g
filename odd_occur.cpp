#include<iostream>
using namespace std;
main()
{
	int A[]={12,12,12,12,3,3,3,4,4,4,4};
	int n=sizeof(A)/sizeof(int),i,x=A[0];
	for(i=1;i<n;i++)
	{
		x^=A[i];
	}
	cout<<x<<endl;
}

