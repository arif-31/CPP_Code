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
	ll n,c=0;
	cin>>n;
	sieve();
	for(ll i=0; primes[i]*primes[i]<=n; i++) {
		if(n%primes[i]==0 ) {
			while(n%primes[i])
				n/=primes[i];

//			cout<<primes[i]<< " ";
//			c++;
		}

	}
	cout<<c<<endl;
	main();
}
