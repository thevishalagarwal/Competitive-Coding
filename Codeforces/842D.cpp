#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}
 
int segregate (int arr[], int size)
{
    int j = 0, i;
    for(i = 0; i < size; i++)
    {
       if (arr[i] <= 0)  
       {
           swap(&arr[i], &arr[j]);
           j++; 
       }
    }
    return j;
}
 

int findMissingPositive(int arr[], int size)
{
  int i;
  for(i = 0; i < size; i++)
  {
    if(abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0)
      arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
  }
  for(i = 0; i < size; i++)
    if (arr[i] > 0)
      return i+1;
 
  return size+1;
}
 
int findMissing(int arr[], int size)
{
   int shift = segregate (arr, size);
   return findMissingPositive(arr+shift, size-shift);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin>>n>>m;
	int a[n], b[m], c[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<m; i++)
		cin>>b[i];
	for(int i=0; i<m; i++)
	{
		int flag = 0;
		for(int j=0; j<n ;j++)
		{
			a[j] = a[j]^b[i];
			c[j] = a[j];
			if(a[j]==0)
				flag = 1;
		}
		cout<<endl;
		if(flag==0)
			cout<<0<<endl;
		else
		 	cout<<findMissing(c, n)<<endl;
	}
	return 0;
}