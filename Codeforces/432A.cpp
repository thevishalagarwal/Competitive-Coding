#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, t, count = 0;
	cin>>n>>k;
	for(int i=0; i<n; i++)
	{
		cin>>t;
		if(t+k<=5)
			count++;
	}
	cout<<count/3;
	return 0;
}