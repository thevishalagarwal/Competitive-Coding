#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int n, t, s = 0;
	cin>>n;
	for(int i=0; i<n ;i++)
	{
		cin>>t;
		s = s + t;
	}
	cout<<(s*100.0)/(n*100);
	return 0;
}