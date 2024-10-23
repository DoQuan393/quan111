#include <bits/stdc++.h>
using namespace std;

int doiXung(int n){
    int m = 0, tmp = n;
    while(n != 0){
        m = m * 10 + n % 10;
        n /= 10;
    }
    if(tmp == m){
        return 1;
    }
    return 0;
}

int a[100005];
int main()
{
	freopen("BAI3.INP","r", stdin);
	freopen("BAI3.OUT","w",stdout);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	bool kt = false;
	for(int i=0;i<n;i++)
	{
		if(doiXung(a[i]))
		{
			cout<<a[i]<<" ";
			kt=true;
		}
	}
	
	if(!kt)
	{
		cout<<-1;
	}
	
	
	return 0;
}
