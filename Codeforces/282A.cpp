#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n, x=0;
	string s;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		size_t f1 = s.find("++");
		if(f1!=string::npos)
			x++;
		else
			x--;
	}
	cout<<x;
	return 0;
}