#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,q, r, temp;
	cin>>n>>q;
	int a[n][n], b[n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin>>a[i][j]; 
	}
	for(int i=0;i<n;i++)
		b[i] = (a[0][i])*-1;
	for(int k=0; k<q; k++)
	{
		cin>>r;
		for(int j=0; j<n; j++)
		{
			cin>>temp;
			a[r-1][j] = temp;
			a[j][r-1] = temp;
		}
		for(int i=0;i<n;i++)
			b[i] = (a[0][i])*-1;
		for(int i=1; i<(n-1); i++)
		{
			if(abs(b[i]-b[i+1])!=a[i][i+1])
				b[i+1] *= -1; 
		}
		for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}	