#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.size();
	sort(s.begin(), s.end());
	cout<<s[n/2];
	for(int i=(n/2)+1; i<n; i++)
		cout<<"+"<<s[i];
	return 0;
}