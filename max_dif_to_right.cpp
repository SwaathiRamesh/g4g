#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector <int> Elts;
	int i,min,max;
	//7, 9, 5, 6, 3, 2
	//2, 3, 10, 6, 4, 8, 1
	Elts.push_back(2);
	Elts.push_back(3);
	Elts.push_back(10);
	Elts.push_back(6);
	Elts.push_back(4);
	Elts.push_back(8);
	Elts.push_back(1);
	min=Elts[0];
	max=Elts[1];
	for(i=1;i<Elts.size()-1;i++)
	{
//		if(min>Elts[i]) min=Elts[i];
		if(max<Elts[i+1]){ max=Elts[i+1];
			if(min>Elts[i]) min=Elts[i];
		}

	}
	cout<<min<<","<<max<<","<<max-min<<endl;


}

	
