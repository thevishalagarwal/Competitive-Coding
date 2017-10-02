#include <bits/stdc++.h>
#include <map>
#include <string>
using namespace std;

string match1(string s1, string s2, string s)
{
	map<char, int> dict;
	map<char, int>::iterator it = dict.begin();
	int i = 0;
	for(i=0; i < s1.size(); i++)
		dict[s1[i]]++;
	for(i=0; i<s2.size(); i++)
		dict[s2[i]]++;
	for(i=0; i<s.size(); i++)
		dict[s[i]]--;
	for(it = dict.begin(); it!=dict.end(); ++it)
	{	
		if(it->second != 0)
			return "NO";
	}
	return "YES";
}
int main()
{
	string s1, s2, s;
	cin>>s1>>s2>>s;
	cout<<match1(s1,s2,s);
	return 0;
}