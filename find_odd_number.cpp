#include<iostream>
using namespace std;
main()
{
	cout<<"\n Given an array of elements where only one elment occurs and odd number of times while all others occur an even number of timees, we need to find the one that occurs an odd number of times";
	int a[]={4,1,4,1,4,3,4,1,3},i,num=a[0];
	int size=(sizeof(a)/sizeof(int));
	for(i=1;i<size;i++)
		num^=a[i];
	cout<<endl<<num<<endl;
}
