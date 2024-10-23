#include <bits/stdc++.h>
using namespace std;
int cp(int n)
{
	int sqr = sqrt(n);
	if(sqr*sqr == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

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

long long a[100005];
int main()
{
	freopen("BAI4.INP","r",stdin);
	freopen("BAI4.OUT","w",stdout);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int max=INT_MIN;
	int maxx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(cp(a[i]))
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		if(nt(a[i]))
		{
			if(a[i]>maxx)
			{
				maxx=a[i];
			}
		}
	}
	int tong=max+maxx;
	cout<<tong;
	
	return 0;
}
