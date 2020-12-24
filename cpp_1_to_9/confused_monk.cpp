#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int m=1e9+7;
ll power2(int x,int n,int  m)
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
	int n,a[1006];
	cin>>n;
	if(n==1) {
		cin>>a[1];
		 int ans=power2(a[1],a[1],m);
         cout<<ans<<endl;
         ans=ans%m;
         cout<<ans<<endl;
		//cout<<pow(a[1],a[1])%m<<endl;
	}
	if(n==2) {
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}

		int g=__gcd(a[1],a[2]);
		// cout<<"g = "<<g<<endl;
		int s=a[1]*a[2];
		//cout<<"s = "<<s<<endl;
		int ans=power2(s,g,m);
		cout<<ans<<endl;
		ans=ans%m;
		cout<<ans<<endl;

	} else {
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		int g=__gcd(a[1],a[2]);
		//cout<<"g = "<<g<<endl;
		int s=a[2]*a[1];
		//cout<<"s = "<<s<<endl;
		for(int i=3; i<=n; i++) {
			g=__gcd(g,a[i]);
			s=s*a[i];
		}
		int ans=power2(s,g,m);
		cout<<ans<<endl;
		ans=ans%m;
		cout<<ans<<endl;

	}
	 main();
	return 0;
}
