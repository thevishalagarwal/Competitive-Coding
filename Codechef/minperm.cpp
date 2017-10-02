#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int z = 0; z<t; z++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1; i<=n; i++)
		{
			if(i%2==1)
				a[i-1] = i+1;
			else
				a[i-1] = i-1;
		}
		if(n%2==1)
		{
			a[n-1] -= 3;
			a[n-2] += 2; 
		}
		for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}