#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll d,x,y;
void ExtendedGCD(ll a,ll b)
{
	if(b==0)
	{
		d=a;
		x=1;
		y=0;
	}
	else
	{
		ExtendedGCD(b,a%b);
		ll t=x;
		x=y;
		y=t-(a/b)*y;
	}
}
int main()
{
	ll a,b;
	cin>>a>>b;
	ExtendedGCD(a,b);
	cout<<x<<' '<<y;
}
