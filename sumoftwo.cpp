//Given an array A[] and a number x, check for pair in A[] with sum as x
//This is the sorting implementation
// Check sumoftwo_case2.cpp for the hash map implementation
#include<iostream>
#include<stdlib.h>
using namespace std;
void sort( int *A, int n)
{
	if(n<1) cout<<"\n Cannot sort, sorry ";
	int i,j,min,k;
	for(i=0;i<n; i++)
	{
		min=A[i];k=i;

		for(j=i+1;j<n;j++)
		{

			if(A[j]<min)
			{
				min=A[j];
				k=j;
			}
		}
		A[k]=A[i];
		A[i]=min;
	}
	
}	
main()
{
	int n, i, j, x;
	cout<<"\n Enter the sum:\n";
	cin>>x;
	cout<<"\n How many array elements ? :\t";
	cin>>n;
	int *A= new int [n];
	cout<<"\n Enter the elements:\t";
	for(i=0;i<n;i++) cin>>A[i];
	cout<<"\n Sorting the array !";
	sort(A,n);
	cout<<endl;
	for(i=0;i<n;i++) cout<<"_"<<A[i];
	for(i=0, j=n-1; i<j && i<n && j>=0; )
	{
		if( A[i]+A[j] == x) { cout<<"\n The values are "<<A[i]<<","<<A[j]<<endl; i=3*j;}
		else if( A[i]+A[j]<x) { /*cout<<"\n One";*/i++;}
		else { /*cout<<"\n two";*/j--;	}

	}
	if(i<3*j || n==0) cout<<"\n Sum not found "<<endl;
	

}

