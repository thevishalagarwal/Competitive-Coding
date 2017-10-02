#define mod 1000000007
#include <bits/stdc++.h>
using namespace std;

/*void operate(vector<int> &a, int n, int m, vector< vector<int> > &b, int start, int end)
{
	for(int i= start; i<end; i++)
	{
		if(b[i][0]==1)
		{
			for(int k=b[i][1]-1; k<b[i][2]; k++)
				a[k] += 1;
		}
		else
			operate(a, n, m, b, b[i][1]-1, b[i][2]);
	}
}*/

/*void sumarray(vector< vector<long long int> > &a, int l, int r, int n, int row)
{
	for(int i=0; i<n; i++)
		a[row][i] = a[row-1][i] +  a[r][i] - a[l-1][i];
}*/

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int z=0; z<t; z++)
	{
		int q, l, r, n, m, temp;
		cin>>n>>m;
		vector<long long int> a(n,0);
		vector< vector<long long int> > ans(m+1, vector<long long int>(n, 0)); 
		for(int i=0; i<m; i++)
		{
			cin>>q>>l>>r;
			if(q==1)
			{
				for(int k = 0; k < n; k++)
				{
					if(k>=(l-1) && k<r)
						ans[i+1][k] = (ans[i][k]%mod + 1)%mod;
					else
						ans[i+1][k] = ans[i][k]%mod;	
				}					
			}
			else
			{
				for(int k=0; k<n; k++)
					ans[i+1][k] = ((ans[i][k]%mod +  ans[r][k]%mod)%mod - ans[l-1][k]%mod + mod)%mod;
			}
				//sumarray(ans, l, r, n, i+1);
		}
		for(int j=0; j<n; j++)
				cout<<ans[m][j]%mod<<" ";
		cout<<endl;
	}
	return 0;
}