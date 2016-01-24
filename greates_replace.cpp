#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector <int> V;
	int i, max,k;
	for(i=0;i<10;i++)
		V.push_back(i*20%9);
	cout<<"\n Before ";
	for(i=0;i<V.size();i++)
		cout<<V[i]<<" ";
	cout<<"\n----\n";
	max=V[V.size()-1];
	cout<<endl<<max<<endl;
	for(i=V.size()-1;i>=0;i--)
	{	k=max;
		if(max<V[i]) max=V[i];
		V[i]=k;
	}
	for(i=0;i<V.size();i++)
		cout<<V[i]<<" ";
	cout<<endl;
}

