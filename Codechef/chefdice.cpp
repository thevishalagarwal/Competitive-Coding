#include <bits/stdc++.h>
using namespace std;

void add(map< int, vector<int> > &a, int m, int k)
{
	for(int i=1; i<=6; i++)
	{
		if(i!=m && i!=k)
		{
			if(find(a[m].begin(), a[m].end(), i) == a[m].end())
				a[m].push_back(i);
			if(find(a[i].begin(), a[i].end(), m) == a[i].end())
				a[i].push_back(m);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	for(int z=0; z<t; z++)
	{
		int n, flag = 0;
		cin>>n;
		int m[n];
		map<int, vector<int> > a;
		for(int i=0; i<n; i++)
			cin>>m[i];
		for(int i=0; i<n-1; i++)
		{
			if(find(a[m[i]].begin(), a[m[i]].end(), m[i+1]) == a[m[i]].end())
				a[m[i]].push_back(m[i+1]);
			if(find(a[m[i+1]].begin(), a[m[i+1]].end(), m[i]) == a[m[i+1]].end())
				a[m[i+1]].push_back(m[i]);
		}
		for(int i=0; i<6; i++)
		{
			if(a[i+1].size()>4 || find(a[i+1].begin(), a[i+1].end(), i+1)!=a[i+1].end())
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
			cout<<-1<<endl;
		else
		{
			for(int i=1; i<=6; i++)
			{
				if(find(a[i].begin(), a[i].end(), (i+1)%6)==a[i].end())
					add(a, i, (i+1)%6);
				else if(find(a[i].begin(), a[i].end(), (i+2)%6)==a[i].end())
					add(a, i, (i+2)%6);
				else if(find(a[i].begin(), a[i].end(), (i+3)%6)==a[i].end())
					add(a, i, (i+3)%6);
				else if(find(a[i].begin(), a[i].end(), (i+4)%6)==a[i].end())
					add(a, i, (i+4)%6);
				else
					add(a, i, (i+5)%6);
			}
		}
		for(int i=0; i<6; i++)
		{
			cout<<i+1<<" : ";
			for(int j=0; j<a[i+1].size(); j++)
				cout<<a[i+1][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}