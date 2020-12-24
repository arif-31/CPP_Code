/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-04-29-12.00
 * UVA-10394 (Twin Primes)
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int m=2e5+5;
int main()
{
	ll n;
	while(cin>>n) {
		vector<pair<ll,ll>>p;
		vector<ll>v;
		for(ll i=2; ; i++) {
			int f=0;
			for(ll j=2; j<=sqrt(i); j++) {
				if(i%j==0) {
					f=1;
					break;
				}
			}
			if(!f)
				v.push_back(i);
			if(v.size()==100000)
				break;
		}
		cout<<v.size()<<endl;
		for(ll i=0; i<v.size(); i++) {
			if(v[i]+2==v[i+1]) {
				//cout<<v[i]<<" ";
				p.push_back(make_pair(v[i],v[i+1]));
			}
		}
		cout<<p.size()<<endl;
//		for(int i=0;i<n;i++)
//		cout<<"("<<p[i].first<<", "<<p[i].second<<")"<<endl;
		//cout<<"("<<p[n-1].first<<", "<<p[n-1].second<<")"<<endl;
	}
}
