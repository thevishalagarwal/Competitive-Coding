#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, count = 0;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	for(int i=1; i<=n; i++)
	{
		if(a[i-1]!=i)
			count++;
	}
	cout<<count<<endl;
	return 0;
}