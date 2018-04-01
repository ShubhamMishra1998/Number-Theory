#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll PHI(ll n)
{
	ll result=n;
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
				n/=i;
			result-=result/i;
		}
	}
	if(n>1)
		result-=result/n;
	return result;
}
int main()
{
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cout<<i<<' '<<PHI(i)<<'\n';
	}
}
