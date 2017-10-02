#include <bits/stdc++.h>
using namespace std;

int maxCost(int n, vector<int> &visited, vector<int> &cost)
{
	int m = -99999, index;
	for(int i=0; i<=n; i++)
	{
		if(visited[i]==0)
		{
			if(cost[i]>m){
				m = cost[i]; index = i;}
		}
	}
	visited[index] = 1;
	return index;
}

int main()
{
	 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k;
	long long s = 0;
	cin>>n>>k;
	vector<int> visited(n);
	vector<int> c(n); vector<int> v(n);
	for(int i=0; i<n; i++)
	{
		cin>>c[i];
		visited[i] = 0;
	}
	for(int i=0; i<n; i++)
	{
		int t = min(k+i, n-1);
		int m = maxCost(t,visited, c);
		s = s + c[m]*(k+i- m);
		v[m] = k+i+1;
	}
	cout<<s<<endl;
	for(int i=0; i<n; i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}