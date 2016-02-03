#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	int small,big, i, j=1;
	small=(a<b)?a:b;
	big=(a>b)?a:b;
	if( big % small ==0 ) return small;
	if(small ==1) return 1;
	if( big ==small) return big;
	for(i=1;i<small;i++)
		if( small%i==0 && big%i==0)
			j=i;
	return j;

}
void convert_to_int( char *s, int & num, int &den)
{
	int i=0, local_n=0, local_d=0;
	while( s[i]!='/')
	{
		if( i==0)
			local_n=s[i++]-'0';
		else{
			local_n*=10;
			local_n+=s[i++]-'0';
		}
		
	}
	i++;
	while(s[i])
	{
		if(s[i-1]=='/') local_d=s[i++]-'0';
		else{
			local_d*=10;
			local_d+=s[i++]-'0';
		}

	}
	cout<<endl<<local_n<<"/"<<local_d<<endl;
	num=local_n;
	den=local_d;

}
main()
{
	int num, den, g;
	string s;
	cin>>s;
	g=0;
	char *A= new char[s.size()];
	for(g=0;g<s.size();g++)
		A[g]=s[g];
	A[g]='\0';
	convert_to_int(A,num,den);
	g=gcd(num,den);
	while( g !=1)
	{
	num/=g;
	den/=g;
	g=gcd(num,den);
	}
	cout<<endl<<num<<"/"<<den;

}
