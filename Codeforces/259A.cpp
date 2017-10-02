#include <iostream>

using namespace std;

string checkChess()
{
	char f, t;
	for(int i=0;i<8;i++)
	{
		cin>>f;
		for(int j=1; j<8; j++)
		{
			cin>>t;
			if(f==t)
				return "NO";
			f = t;
		}
	}
	return "YES";
}

int main()
{
	cout<<checkChess();
	return 0;
}