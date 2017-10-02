#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int k, a, b;
		cin>>k>>a>>b;
		if(k%2==0)
		{
			if(abs(a-b)==k/2)
				cout<<0<<endl;
			else
				cout<<k/2 - 2<<endl;
		}
		else
		{
			cout<< (k - 1 - k/2 - 2)<<endl;
		}
	}
	return 0;
}