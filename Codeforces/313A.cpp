#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	if(n>=0)
		cout<<n;
	else
	{
		n = n*-1;
		n = n/10 < (n/100)*10+(n%10) ? n/10 : (n/100)+(n%10);
		n = n*-1;
		cout<<n; 
	}
	return 0;
}