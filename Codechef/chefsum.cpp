#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0; j<n; j++)
			cin>>a[j];
		int m = 0;
		for(int j=1; j<n; j++)
		{
			if(a[j] < a[m])
				m = j;
		}		
		cout<<m+1<<endl;
	}
	return 0;
}