/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-04-24-22.39
 * UVA - 406 (prime cuts )
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n,c;
	while(cin>>n>>c) {
		vector<ll>v;
		vector<ll>f;
		v.push_back(1);
		for(ll i=2; i<=n; i++) {
			ll f=1;
			for(ll j=2; j<=sqrt(i); j++) {
				if(i%j==0)f=0;
			}
			if(f==1) {
				v.push_back(i);
			}
		}
		//cout<<v.size()<<endl;
		ll l=v.size();
		cout<<n<<" "<<c<<": ";
		if((2*c)>l) {
			for(ll i=0; i<v.size(); i++) {
				if(i!=v.size()-1)
					cout<<v[i]<<" ";
				else
					cout<<v[i];
			}
			cout<<endl;
			cout<<endl;
		} else  if(l%2==0) {
			ll m=l/2;
			//f.push_back(v[m]);

			for(ll i=m-1; i>=m-(c); --i)
				f.push_back(v[i]);
			f.push_back(v[m]);
			for(ll i=m+1; i<=m+(c)-1; i++)
				f.push_back(v[i]);
			sort(f.begin(),f.end());
			for(ll i=0; i<f.size(); i++) {
				if(i!=f.size()-1)
					cout<<f[i]<<" ";
				else
					cout<<f[i];
			}
			cout<<endl;
			cout<<endl;
		} else {
			ll m=l/2;
			for(ll i=m-1; i>=m-(c)+1; --i)
				f.push_back(v[i]);
			//f.push_back(v[m]);
			for(ll i=m; i<=m+(c)-1; i++)
				f.push_back(v[i]);
			sort(f.begin(),f.end());
			for(ll i=0; i<f.size(); i++) {
				if(i!=f.size()-1)
					cout<<f[i]<<" ";
				else
					cout<<f[i];
			}
			cout<<endl;
			cout<<endl;
		}
	}
}

