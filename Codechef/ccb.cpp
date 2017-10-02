#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int a[26], p = 0;
		for(int j=0; j<26; j++)
			cin>>a[j];
		map<char, int> d;
		char c;
		for(int j=0; j<26; j++)
			d['a'+j] = 0;
		string s;
		cin>>s;
		for(int j=0; j<s.size(); j++)
			d[s[j]]+=1;
		for(int j=0; j<26; j++)
		{
			if(d['a'+j]==0)
				p = p + a[j];
		}
		cout<<p<<endl;
	}
	return 0;
}