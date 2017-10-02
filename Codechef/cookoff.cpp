#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int z=0; z<t; z++)
	{
		int n;
		cin>>n;
		string s;
		map<string, int> a;
		for(int i=0; i<n; i++)
		{
			cin>>s;
			a[s]++;
		}	
		if(a["cakewalk"]>0 && a["simple"]>0 && a["easy"]>0 && (a["easy-medium"]>0 || a["medium"]>0) && (a["medium-hard"] || a["hard"]))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}