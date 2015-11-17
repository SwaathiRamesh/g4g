#include<iostream>
using namespace std;
main()
{
	string A="newYork";
	int n=0,i;
	for(n=1;A[n];n++);
	cout<<"\n"<<A;
	for(i=0;i<n/2;i++)
	{
		char b=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=b;
	}
	cout<<endl<<A<<endl;
}
