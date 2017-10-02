#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int mi = m<n?m:n;
	cout<<(n+m-1-mi)<<" "<<mi<<endl;
	return 0;
}