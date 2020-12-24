///contest name:Good Bye 2019
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		for(ll i=0; i<n; i++) {
			ll a;
			cin>>a;
			v.push_back(a);
		}
		ll mx=0;
		ll mn=10000000000;
		ll m,nn;
		for( ll i=0; i<v.size(); i++) {
			if(mx<v[i]) {
				m=i;
			}
			if(mn>v[i]) {
				nn=i;
			}
			mx=max(mx,v[i]);
			mn=min(mn,v[i]);
		}
		cout<<"max="<<mx<<endl;
		cout<<"min="<<mn<<endl;
		if(mx-mn<n)
			cout<<"NO"<<endl;
		else {
			cout<<"YES"<<endl;
			if(m+1<nn+1)cout<<m+1<< " "<<nn+1<<endl;
			else cout<<nn+1<< " "<<m+1<<endl;
		}
	}
}
