#include <bits/stdc++.h>
using namespace std;

vector<int> addSubsequence(int start, int i, vector<int> &visit, vector<int> &s, vector<long int> &a, vector<long int> &b)
{
	if(visit[i]==0)
	{
		visit[i] = 1;
		s.push_back(i+1);
		long int temp = a[i];
		int f = find(b.begin(), b.end(), temp) - b.begin();
		if(f==start)
			return s;
		else
			return addSubsequence(start, f, visit, s, a, b);
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<long int> a(n);
	vector<long int> b(n);
	vector<int> visit(n);
	vector< vector<int> > ans;
	for(int i=0; i<n; i++)
	{	
		cin>>a[i];
		b[i]=a[i];
		visit[i] = 0;
	}
	sort(b.begin(), b.end());
	for(int i=0; i<n; i++)
	{
		if(visit[i]==0)
		{
			int start = i;
			vector<int> s;
			ans.push_back(addSubsequence(start, i, visit, s, a, b));
			s.clear();

		}
	}

	cout<<ans.size()<<endl;
	for(int i=0; i<ans.size(); i++)
	{
		cout<<ans[i].size()<<" ";
		for(int j=0; j<ans[i].size(); j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	return 0;	
}