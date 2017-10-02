#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, flag = 0;
	cin>>k;
	string s, s1 = "";
	cin>>s;
	map<char, int> d;
	map<char, int>::iterator it;
	for(int i=0; i<s.size(); i++)
		d[s[i]]++;
	
	for(it = d.begin(); it!=d.end(); ++it)
	{
		if((it->second)%k!=0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
		cout<<-1<<endl;
	else
	{
		for(it = d.begin(); it!=d.end(); ++it)
		{
			for(int i=1; i<=(it->second)/k; i++)
				s1 = s1 + (it->first);
		}
		for(int i=0; i<k-1; i++)
			s1 = s1 + s1;
		cout<<s1<<endl;
	}
	return 0;
}