#include <bits/stdc++.h>
using namespace std;

int main()
{
	int rp, d, n, count = 0;
	cin>>rp>>d;
	cin>>n;
	int x[n], y[n], r[n];
	for(int i=0; i<n; i++)
		cin>>x[i]>>y[i]>>r[i];
	for(int i=0; i<n; i++)
	{
		float dist = sqrt(x[i]*x[i]+y[i]*y[i]);
		if( (dist>=(rp-d+r[i])) && (dist <= (rp-r[i])))
			count++;
	}
	cout<<count;
	return 0;
}