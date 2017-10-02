#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	size_t f1 = s.find("0000000");
	size_t f2 = s.find("1111111");
	if(f1!=string::npos || f2!=string::npos)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}