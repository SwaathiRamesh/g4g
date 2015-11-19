//sorted subsequence of size 3
#include<iostream>
using namespace std;
main()
{
	int A[]={12, 11, 10, 5, 6, 2, 30};
	int Max[7],Min[7],i,max,min;
//	for(i=0;i<7;i++) B[i]=C[i]=-1;
	min=A[0];
	max=A[6];
	// min - minimum value obtained from 0 till ith position
	// max- max value obtained from n-1 till that position
	for(i=0;i<7;i++)
		if(min > A[i]) { min =A[i]; Min[i]=-1;}
		else Min[i]=min;
	for(i=6;i>=0;i--)
		if(max<A[i]) { max=A[i]; Max[i]=-1;}
		else Max[i]=max;
	for(i=0;i<7;i++) cout<<A[i]<<" "<<Min[i]<<" "<<Max[i]<<endl;
	cout<<endl<<"------"<<endl;
	for(i=0;i<7;i++) if(Max[i]!=-1&& Min[i]!=-1) cout<<A[i]<<endl;


}


