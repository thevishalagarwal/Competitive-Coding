#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	map<int, int> v;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n-1; i++)
	{
		int t = a[i+1]-a[i];
		v[t]++;
	}
	if(v.size()==2)
		cout<<"Yes";
	else
		cout<<"No";
	cout<<endl;
	return 0;
}