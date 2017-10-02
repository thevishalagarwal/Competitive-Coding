#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, l, c, d, p, q, r;
	cin>>n>>k>>l>>c>>d>>p>>q>>r;
	int drink = (l*k)/q;
	int lemon = c*d;
	int salt = p/r;
	int m = drink<lemon?drink:lemon;
	m = m<salt?m:salt;
	m = m/n;
	cout<<m;
	return 0;
}