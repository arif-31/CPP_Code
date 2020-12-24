#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		if(n>0 && n<10)cout<<n<<endl;
		else {
			for(ll i=10;i<=999 ; i++) {
				ll nm=i,m,f=0,sum=0;
				while(nm!=0) {
					m=nm%10;
					sum=sum+m;
					///cout<<sum<<endl;
					if(sum==n && (i%sum)==0) {
						f=1;
						cout<<i<<endl;
//						break;
					}
					nm/=10;
				}
//				if(f==1)break;
			}

		}

	}
}
