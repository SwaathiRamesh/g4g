#include<iostream>
using namespace std;
main()
{
	int A[]={12,-1,3,6,-1,8,0,-1};
	int B[]={4,5,7};
	int i=0,j=0, a_num=sizeof(A)/sizeof(int), b_num=sizeof(B)/sizeof(int);
	cout<<"\n A first:\n";
	for(i=0;i<a_num;i++) cout<<A[i]<<" ";
	cout<<"\n B now:"<<endl;
	for(i=0;i<b_num;i++) cout<<B[i]<<" ";
	i=0;
	while(i<a_num && j<b_num)
		{
		if(A[i]==-1) A[i++]=B[j++];
		else i++;
		}
	
	
	cout<<"\n After insert"<<endl;
	for(i=0;i<a_num;i++) cout<<A[i]<<" ";
}
	
