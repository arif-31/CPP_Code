#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m=1e9+7;
ll power(ll x,ll n,ll m)
{
	if(n==0)
		return 1;
	else if(n%2==0)
		return power((x*x)%m,n/2,m);
	else
		return x*power((x*x)%m,(n-1)/2,m)%m;
    ///time complexity = O(logN);
    ///memory complexity = O(logN);
    
}
ll power2(ll x,ll n,ll m)
{
	ll result =1;
	while(n>0) {
		if(n%2==1)
			result = (result*x)%m;
		x=(x*x)%m;
		n/=2;
	}
	return result;
    ///time complexity = O(logN);
    ///memory complexity = O(1);
    ///more useful
}
int main()
{
	int t;
	cin>>t;
	while(t--) {
		ll n,x;
		cin>>x>>n;
		cout<<power(x,n,m)<<endl;
		cout<<power2(x,n,m)<<endl;

	}
}







