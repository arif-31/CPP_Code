#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isprime[10000001];
vector<ll>primes;
void sieve() {
	isprime[2]=false;
	primes.push_back(2);
	for(ll i=4; i<=10000000; i+=2) {
		isprime[i]=true;
	}
	for(ll i=3; i<=10000000; i+=2) {
		if(!isprime[i]) {
			primes.push_back(i);
			for(ll j=i*i; j<=10000000; j+=i) {
				isprime[i]=true;
			}
		}
	}
	isprime[0]=isprime[1]=true;

}
int main() {


	ll n;
	sieve();
	while(cin>>n and n) {
		vector<ll>f;
		set<ll>st;
		ll c=0;
//////		cout<<n<< " = ";
//////		if(n<0) {
//////			cout<<"-1 x ";
//////			n=(-1)*n;
//////		}
		for(ll i=0; primes[i]*primes[i]<n; i++) {
			if(n%primes[i]==0) {
				while(n%primes[i]==0) {
					n/=primes[i];
				}
				f.push_back(primes[i]);
//				st.insert(primes[i]);
//				c++;
//				cout<<primes[i]<<" ";
			}
		}
//		cout<<st.size()<<" "<<c<<endl;

		if(n!=1)
			f.push_back(n);
//		for(ll i=0; i<f.size(); i++) {
//			if(i!=(f.size()-1))
//				cout<<f[i]<<" x ";
//			else
//				cout<<f[i]<<endl;
//		}
		cout<<f.size()<<endl;

	}

}
