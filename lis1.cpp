#include<iostream>
using namespace std;
int LCS[9];
main()
{
	int A[]={0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15},i,j;
	int n=sizeof(A)/sizeof(int);
	for(i=0;i<n;i++)
	{

		LCS[i]=1;

		int max=LCS[0];
		for(j=0;j<i;j++)
			if(A[j]<A[i])
				if(max<1+LCS[j]) max=LCS[j]+1;

		LCS[i]=max;
	}
	for(i=0;i<n;i++)
	cout<<LCS[i]<<" ";
	cout<<endl;
}

	
