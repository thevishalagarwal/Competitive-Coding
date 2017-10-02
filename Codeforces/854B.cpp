#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, f, f2;
	cin>>n>>k;
	if(k==0 || k==n)
		f = 0;
	else
		f = 1;
	if(k<n/2)
		f2 = 2*k;
	else
		f2 = n-k;
	cout<<f<<" "<<f2<<endl;
	return 0;
}