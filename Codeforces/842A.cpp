#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, r, x, y, flag = 0;
	float k;
	cin>>l>>r>>x>>y;
	cin>>k;
	for(int i=x; i<=y; i++)
	{
		float a = i*k;
		if(a==floor(a) && (a>=l && a<=r))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}