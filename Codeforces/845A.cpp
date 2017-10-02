#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(2*n);
	for(int i=0; i<2*n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	//cout<<checkPlayer(a, n);
	if(a[n-1]<a[n])
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}