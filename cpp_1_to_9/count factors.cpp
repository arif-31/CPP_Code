#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>vl;
bool primes[1000009];
void sieve() {
	primes[2]=false;
	vl.push_back(2);
	for(ll i=4; i<=1000000; i+=2) {
		primes[i]=true;
	}
	for(ll i=3; i<=1000000; i+=2) {
		if(!primes[i]) {
			vl.push_back(primes[i]);
			for(ll j=i*i; j<1000000; j+=i) {
				primes[i]=true;
			}
		}
	}
	primes[0]=primes[1]=true;
//	return n;
}
ll countDivisors(ll n)
{
	sieve();
	int cnt = 0,count;
//	for (ll i = 1; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			// If divisors are equal,
//			// count only one
////			if (n / i == i)
////				cnt++;
////
////			else // Otherwise count both
////				cnt = cnt + 2;
////			}
//
//			if(sieve(i)==false)
//			{
//
//			}
//		}
//
//	}
	return count;
}
int main() {
	int n;
	while(cin>>n and n) {
		set<ll>s;
		int cnt=0;
		sieve();
		for (ll i = 1; i <= (n/2); i++) {
			if (n % vl[i]== 0) {
			     s.insert(vl[i]);
//				 If divisors are equal,
//				 count only one
//				if (n / i == i)
//					cnt++;
//
//				else // Otherwise count both
//					cnt = cnt + 2;
			}
//			if(primes[i]==false) {
//				primes[i]=true;
//				cout<<"i="<<i<<endl;
//				s.insert(i);
//			}



		}
		cout<<s.size()<<endl;
//		vl.clear();
//		primes[1000000]=false;
	}
}
