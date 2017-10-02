#include <bits/stdc++.h>
using namespace std;

unsigned long long power2(int n)
{
	if(n==0)
		return 1;
	else
		return 2*power2(n-1);
}
int main()
{
	int t;
	cin>>t;
	unsigned long long c = 0, k = 0;
	for(int i=0; i<t; i++)
	{
		int n;
		unsigned long long c = 0, k = 0;
		cin>>n>>k;
		while(n>0)
		{
			if(k%2==1)
				c = c + power2(n-1);
			k = k/2;
			n--;
		}
		c = k + c;
		cout<<c<<endl;
	}
	return 0;
}