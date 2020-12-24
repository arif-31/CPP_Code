#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
typedef long long ll;
bool isprime[100000009];
vector<ll>primes;
void sieve() {
	isprime[2]=false;
	primes.push_back(2);
	for(ll i=4; i<=100000009; i+=2) {
		isprime[i]=true;
	}
	for(ll i=3; i<=100000009; i+=2) {
		if(!isprime[i]) {
			primes.push_back(i);
			for(ll j=i*i; j<=100000009; j+=i) {
				isprime[i]=true;
			}
		}
	}
	isprime[0]=isprime[1]=true;

}
int main() {
	ll n,f;
	cin>>n;
	vector<ll>v;


	for(ll i=1; i<=100000009; i++)
	{
		ll t,a,sum=1;
		t=i;
		while(t!=0) {
			a=t%10;
			t=t/10;
			sum=sum*a;
		}
		if(sum==n) {
			cout<<i<<endl;
			f=1;
			break;
		}

	}
	if(!f) {
		if(n%11==0 || !isprime[n])
		{
			f=1;
			cout<<"-1"<<endl;
			//return 0;
		}
		else cout<<"-1"<<endl;
	}

	//main();

}
