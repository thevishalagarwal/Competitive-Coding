#include <vector>
#include <iostream>
using namespace std;

bool isVowel(char c)
{
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'y':
		case 'u':return true;
		default: return false;
	}
}
int main()
{
	string a;
	cin>>a;
	for(int i=0; i <a.size(); i++)
	{
		a[i] = tolower(a[i]);
		if(isVowel(a[i]))
			continue;
		else
		{
			cout<<"."<<a[i];
		}
	}
	return 0;
}