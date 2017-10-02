#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n, k, t, count = 0;
	cin>>n>>k;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		cin>>t;
		v.push_back(t);
	}
	for(int i=0; i<n; i++)
	{
		if(v[i]>0 && v[i]>=v[k-1])
			count++;
	}
	cout<<count;
	return 0;
}