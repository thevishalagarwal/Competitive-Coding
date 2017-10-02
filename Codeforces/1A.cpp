#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long n, m, a, t;
	cin>>n>>m>>a;
	if(n%a==0)
		t = n/a;
	else
		t = (n/a)+1;
	if(m%a==0)
		t = t * m/a;
	else
		t = t * ((m/a)+1);
	cout<<t;
	return 0;
}