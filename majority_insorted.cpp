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

void majority_binary( int A[], int x, int a_num)
{
	/* as we need at least n/2 occurences, the condition is that the previous element is not x.
	 * the other edge case can be when it is the first element and hence has no preceeding element.
	 */
	int pos=-1;
	int beg=0, end=a_num-1, mid;
	while(beg<=end&& end>0)
	{
//		cout<<"\n\t\t"<<mid<<endl;
		mid=(beg+end)/2;
		if(A[mid]==x)
		{
	//		cout<<"\n\t Finding Match at "<<mid<<endl;
			if( (mid==0 && A[(a_num)/2+1]==x)||( A[mid-1]!=x && ( mid+a_num/2+1 < a_num && A[mid+a_num/2] == x)))
			{ cout<<"\n YEs"; return;}
//			else cout<<"\n Hello"<<"\t\t Prev elmnt "<<A[mid-1]<<" after n/2 elmnts"<<A[mid+a_num/2]<<endl;
			end=mid-1;
		}
		else if( A[mid] <x)
			beg=mid+1;
		else end=mid-1;
	}
	cout<<"\n No";
}
main()
{
	int A[]={1,2,3,4,4,4,4,4}, B[]={1,2,2,2,2,2,8,9};
	int x,a_num,b_num;
	a_num=sizeof(A)/sizeof(int);
	b_num=sizeof(B)/sizeof(int);
	majority_linear(A,2, a_num);
	majority_linear(B,2, b_num);
	cout<<"\n bnary"<<endl;
	majority_binary(A,2,a_num);
	majority_binary(B,2,b_num);
}


