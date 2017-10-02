#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1,y1, x2, y2, x3, y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double a = x1-x2, b = y1-y2, c1 = x2-x3, c2 = y2-y3;
	double x = (a*c1+b*c2)*1.0/(a*a+b*b);
	double y = (b*c1-a*c2)*1.0/(a*a+b*b);
	double z = (x*x+y*y);
	//cout<<x<<" "<<y<<" "<<z<<endl;
	if(z>0.99999999 && z<1.00000001)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
