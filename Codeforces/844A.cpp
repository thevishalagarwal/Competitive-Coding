#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.size();
	int k;
	cin>>k;
	map<char, int>d;
	if(k>n)
		cout<<"impossible"<<endl;
	else
	{
		for(int i=0; i<n ;i++)
			d[s[i]] = 1;
		int f = d.size()>=k ? 0 : k-d.size();
		cout<<f<<endl;
	}
	return 0;
}