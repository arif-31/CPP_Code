///Divisibility problem
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll a,b;
		cin>>a>>b;
		if(a%b==0)cout<<"0"<<endl;
		else  {
			ll n=a/b;
			b=(n+1)*b;
			ll ans=b-a;
			cout<<ans<<endl;
		}


	}
}
