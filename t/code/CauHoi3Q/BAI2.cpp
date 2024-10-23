#include <bits/stdc++.h>
using namespace std;
int a[100005];
bool nt(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	freopen("BAI2.INP","r", stdin);
	freopen("BAI2.OUT","w",stdout);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(nt(a[i]) && a[i]<n)
		{
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
