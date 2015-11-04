//Given an array A[] and a number x, check for pair in A[] with sum as x
//This is the hash map implementation
// Check sumoftwo.cpp for the sorting implementation
#include<iostream>
using namespace std;
bool B[21];
int main()
{
	int n,x,i, flag=0;
	for(i=0;i<21;i++) B[i]=0;
	cout<<"\n Sum in question is :\t";
	cin>>x;
	cout<<"\n The number of array elts is ( max of 20, from 0-20) :\t";
	cin>>n;
	int *A= new int [n];
	if( !A) { cout<<"\n Memory not enough, bbye !";  }
	else{
	cout<<"\n Enter the array values:\n";
	for(i=0;i<n;i++) {
	       cin>>A[i];	
		if(A[i]<0 || A[i]>20) { cout<<"\n Invalid entry ! Try again "; i--;}
		else{
		if(x-A[i]>0 && x-A[i]<=20 && B[x-A[i]] ==1) {cout<<"("<<x-A[i]<<", "<<A[i]<<")"<<endl; flag++;}
		B[A[i]]=1;}
	}
	if(!flag) cout<<"\n No such elements found !";
	}
	
}
	


