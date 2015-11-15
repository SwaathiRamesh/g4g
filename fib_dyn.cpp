#include<iostream>
using namespace std;
main()
{
	int n,i;
	cin>>n;
	int *A= new int [n];
	A[0]=0;
	A[1]=1;
	for(i=2;i<n;i++)
		A[i]=A[i-1]+A[i-2];
	cout<<A[n-1];

}
