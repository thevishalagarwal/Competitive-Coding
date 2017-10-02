#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	long long a, count = 0;
	cin>>a;
	string s = to_string(a), str1 = "4", str2 = "7";
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='4' || s[i]=='7')
			count++;
	}
	if(count==4 || count==7)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}