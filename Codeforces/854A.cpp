#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2==1)
	{
		int m = n/2, t = (n/2)+1;
		while(__gcd(m, t)!=1)
		{	m--; t++; }
		cout<<m<<" "<<t<<endl;
	}
		
	else
	{
		int m = (n/2)-1, t = (n/2)+1;
		while(__gcd(m, t)!=1)
		{	m--; t++; }
		cout<<m<<" "<<t<<endl;
	}
	return 0;
}