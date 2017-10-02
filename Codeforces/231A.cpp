#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n, t, count = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int c = 0;
		for(int j=0; j<3; j++)
		{
			cin>>t;
			if(t==1)
				c++;
		}
		if(c>1)
			count++;

	}
	cout<<count;
}