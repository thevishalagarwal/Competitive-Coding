#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, t, count = 0;
	cin>>n;
	map<int,int> a;
	for(int i=1; i<=n; i++)
		a[i] = 0;
	for(int i=0; i<n; i++)
	{
		cin>>t;
		a[t]++;
	}
	for(map<int, int>::iterator it = a.begin(); it!=a.end(); ++it)
	{
		if((it->second)==0)
			count++;
	}
	cout<<count<<endl;
	return 0;
}