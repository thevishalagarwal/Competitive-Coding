#include <bits/stdc++.h>
using namespace std;

int countSubset(int n)
{
	if(n>1)
		return pow(2,n)-n-1;
	else
		return 0;
}
int main()
{
	int n, m;
	cin>>n>>m;
	int a[n][m];
	int count = 0;
	for(int i=0; i<n; i++)
	{
		int a0=0, a1=0;
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0)
				a0++;
			if(a[i][j]==1)
				a1++;
		}
		count += countSubset(a0);
		count += countSubset(a1);
	}
	for(int i=0; i<m; i++)
	{
		int a0=0, a1=0;
		for(int j=0; j<n; j++)
		{
			if(a[j][i]==0)
				a0++;
			if(a[j][i]==1)
				a1++;
		}
		count += countSubset(a0);
		count += countSubset(a1);
	}
	count += n*m;
	cout<<count<<endl;
	return 0;
}