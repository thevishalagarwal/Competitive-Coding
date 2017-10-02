#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int checkPresent(string s1, string s2)
{
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]<s2[i])
			return -1;
		if(s1[i]>s2[i])
			return 1;
	}
	return 0;
}
int main()
{
	string s1, s2;
	cin>>s1>>s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	cout<<checkPresent(s1, s2);
	return 0;
}