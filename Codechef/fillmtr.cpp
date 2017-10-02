#define inf -99999 

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int z=0; z<t; z++)
	{
		int n, k, flag = 0;
		cin>>n>>k;
		std::vector<int> a(n+1, inf);
		int q[k][3];
		for(int i=0; i<k; i++)
		{
			for(int j=0; j<3;j++)
				cin>>q[i][j];
		}
		a[1] = 0;
		for(int i=0; i<k; i++)
		{
			if((q[i][0]==q[i][1]) && (q[i][2]!=0))
			{
				flag = 1;
				break;
			}
			if(q[i][0]!=q[i][1])
			{
				if(a[q[i][0]]==inf && a[q[i][1]]==inf)
				{
					a[q[i][0]] = 0;
					a[q[i][1]] = q[i][2];
				}
				else if(q[i][0]== inf && q[i][1]!=inf)
					a[q[i][0]] = a[q[i][1]]^q[i][2];
				else if(a[q[i][0]]!=inf && a[q[i][1]]==inf)
					a[q[i][1]] = a[q[i][0]]^q[i][2];
				else
				{
					if(abs(a[q[i][0]]-a[q[i][1]]) != q[i][2])
					{
						flag = 1;
						break;
					}
				}
			}
		}
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}