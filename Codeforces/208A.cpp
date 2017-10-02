#include <bits/stdc++.h>
#include <string>
using namespace std;

string removeSubstring(string s)
{
	string s1 = "";
	size_t f = s.find("WUB");
	while(f==0)
	{
		s.erase(f,3);
		f = s.find("WUB");
	}
	for(f = s.find("WUB"); f!=string::npos; f=s.find("WUB"))
	{
		if(s[f-1]!=' ')
		{
			s.insert(f," ");
			s.erase(f+1,3);
		}
		else
			s.erase(f,3);
	}
	return s;
}

int main()
{
	string s;
	cin>>s;
	cout<<removeSubstring(s)<<endl;
	return 0;
}