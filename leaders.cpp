#include<iostream>
using namespace std;
main()
{
	int n,A[]={16, 17, 4, 3, 5, 2},max,i;
	n = sizeof(A)/sizeof(int);
	max=-1;
	for(i=n-1;i>=0;i--)
	{
		if(max<A[i]) {
			cout<<A[i]<<endl;
			max=A[i];
		}
	}
}

