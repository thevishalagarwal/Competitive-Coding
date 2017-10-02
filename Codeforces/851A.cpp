#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t, k;
	cin>>n>>k>>t;
	if(t<=k)
		cout<<t;
	else if(t>k && t<=n)
		cout<<k;
	else if(t>n && t<=(n+k))
		cout<<n+k-t;
	else
		cout<<0;
	return 0;
}