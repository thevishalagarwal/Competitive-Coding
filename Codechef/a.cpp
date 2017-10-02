#include <bits/stdc++.h>
#include <map>
#include <string>
using namespace std;

string balloon(string s, int n, int k)
{
	
	//if(n<k)
		//return "NO";
	map <char,int> m;
	for(int i=0; i<s.size(); i++)
	{
		if(m.find(s[i])==m.end())
			m[s[i]] = 1;
		else
			m[s[i]] += 1;
	}

	for(map <char,int>::iterator it = m.begin(); it!=m.end(); ++it)
	{
		if((it->second) > k)
			return "NO";
	}
	return "YES";
}

int main()
{
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	cout<<balloon(s,n,k);
	return 0;
}