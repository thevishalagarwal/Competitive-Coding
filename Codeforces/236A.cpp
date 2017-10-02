#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	map<char, int> a;
	for(int i=0; i<s.size(); i++)
		a[s[i]] = 1;
	if(a.size()%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}
