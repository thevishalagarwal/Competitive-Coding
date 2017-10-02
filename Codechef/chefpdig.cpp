#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int z = 0; z<t; z++)
	{
		string s, s1 = "";
		cin>>s;
		int a[10];
		for(int i=0; i<10; i++)
			a[i] = 0;
		for(int i=0; i<s.size(); i++)
			a[s[i]-'0']++;
		for(int i=65; i<=90; i++)
		{
			char c = i;
			int r2 = i%10;
			int r1 = i/10;
			if(r1==r2)
			{
				if(a[r1]>=2)
					s1 = s1 + c; 
			}
			else
			{
				if(a[r1]>0 && a[r2]>0)
					s1 = s1 + c;
			}
		}
		cout<<s1<<endl;
	}
	return 0;
}