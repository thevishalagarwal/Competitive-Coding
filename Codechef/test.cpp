#include <iostream>
using namespace std;

int main()
{
	int n, k, flag = 0, end;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int start = 0;
	int s = 0, i=0;
	for(i=0; i<n; i++)
	{		
		if(s==k)
		{
			flag = 1;
			end = i;
			break;
		}
		if(s<k)
		{
			s = s + a[i];
			while(s>k)
			{
				s = s - a[start];
				start = start + 1;
			}	
		}
	}
	if(s==k)
	{
		flag = 1;
		end = i;
	}
	if(flag==0)
		cout<<"Not Found"<<endl;
	else
		cout<<"Found between "<<start+1<<" and "<<end<<endl;
	return 0;
}