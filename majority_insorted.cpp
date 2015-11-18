//check if an element is the majority element in a sorted array, given the array and the element
#include<iostream>
using namespace  std;
void majority_linear( int X[], int n, int x_num)
{
	int i;
	for(i=0;i<x_num;i++)
	{
		if(X[i]==n ){
//			cout<<"\n X[i] is:\t"<<X[i]<<"\t at i:\t"<<i<<"\t with x_num/2:\t"<<x_num/2<<"\t so, i+(x_num)/2 is \t"<<i+(x_num)/2<<"\t and value at i+(x_num)/2 is\t"<<X[i+(x_num)/2];
		       if((i <= x_num/2 && X[i+(x_num)/2]==n))
		{
			cout<<"\n\t Majority Element is "<<X[i]<<endl;
			return;
		}
		}
	}
	cout<<"\n\t Not a Majority element!";


}
main()
{
	int A[]={1,2,3,4,4,4,4,4}, B[]={1,2,2,2,2,2,8,9};
	int x,a_num,b_num;
	a_num=sizeof(A)/sizeof(int);
	b_num=sizeof(B)/sizeof(int);
	majority_linear(A,2, a_num);
	majority_linear(B,2, b_num);
}


