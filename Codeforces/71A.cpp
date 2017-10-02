#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int n;
	string c, t;
	cin>>n;
	std::vector<string> v;
	for(int i=0; i<n;i++)
	{
		cin>>c;
		if(c.size() > 10)
		{
			t = c[0]+std::to_string(c.size()-2)+c[c.size()-1] ;
			v.push_back(t);
		}
		else
			v.push_back(c);
	}
	for(int i=0; i<n;i++)
		cout<<v[i]<<endl;
	return 0;
}