//বিসমিল্লাহির_রহমানির_রহীম
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define N 2000015
#define MOD 1000000007
#define all(x) x.begin(),x.end()
#define CASES int t;cin>>t;for(int T=1;T<=t;T++)
#define F first
#define S second
#define pb push_back
#define f(n) for(int i = 1; i <= n; i++)
#define print(x) cout << x << endl
#define sprint(x) cout << x << " "
#define in1(a) cin >> a
#define in2(a,b) cin >> a >> b
#define in3(a,b,c) cin >> a >> b >> c
#define in4(a,b,c,d) cin >> a >> b >> c >> d
//void solve_A()
//{
//
//	ll n, m, r, c;
//	in4(n,m,r,c);
//	ll a = (abs(r - 1) + abs(c - 1));
//	ll b = (abs(r - n) + abs(c - m));
//	ll cc = (abs(r - n) + abs(c - 1));
//	ll d = (abs(r - 1) +abs(c - m));
//	ll mm = max({a,b,cc,d});
//	print(mm);
//}
void solve_B()
{
	ll n, k;
	in2(n, k);
	ll ar[n + 1];
	map < ll, ll > mp;
	map < ll, ll > mpp;
	map < ll, ll > :: iterator it;
	f(n) {
		in1(ar[i]);
		mp[ar[i]]++;
	}
	if(mp.size() == n) {
		print(n - 1);
		return;
	}
	ll mx = 0, p,ans  = 0;
	for(it = mp.begin(); it != mp.end(); it++) {
		//sprint(it->F),print(it->S);
		if(it->S > mx) {
			mx = it->S;
			p = it->F;
		}
	}
	ll c = 1, mxx = 0, P = ar[1];
	for(int i = 2; i <= n; i++) {
		if(ar[i] != ar[i - 1]) {
			if(c <= k)
				mpp[ar[i - 1]]++;
			else {
				ll d = 0;
				if(c > mxx) {
					mxx = c;
					P = ar[i - 1];
				}
				while(c > k) {
					d++;
					c -= k;
				}
				if(c != 0)
					d++;
				mpp[ar[i - 1]] += d;
			}
			c = 1;
		} else
			c++;
	}
	if(c >= 1) {
		if(c <= k)
			mpp[ar[n]]++;
		else {
			ll d = 0;
			while(c > k) {
				d++;
				c -= k;
			}
			if(c != 0)
				d++;
			mpp[ar[n]] += d;
		}
	}
	//print(ans);
	mx = 0;
	for(it = mpp.begin(); it != mpp.end(); it++) {
		//sprint(it->F),print(it->S);
		if(it->S > mx) {
			mx = it->S;
			p = it->F;
		}
	}
	ll ans3 = 0;
	c = 0;
	for(int i = 1; i <= n; i++) {
		if(ar[i] == P) {
			if(c == 0)
				continue;
			while(c > k) {
				ans3++;
				c-=k;
			}
			if(c != 0)ans3++;
			c = 0;
		} else
			c++;
	}
	if(c >=1) {
		while(c > k) {
			ans3++;
			c-=k;
		}
		if(c != 0)ans3++;
	}
	print(ans3);
}
int main()
{

	CASES{
		ll n, k;
	in2(n, k);
	ll ar[n + 1];
	map < ll, ll > mp;
	map < ll, ll > mpp;
	map < ll, ll > :: iterator it;
	f(n) {
		in1(ar[i]);
		mp[ar[i]]++;
	}
	if(mp.size() == n) {
		print(n - 1);
		return;
	}
	ll mx = 0, p,ans  = 0;
	for(it = mp.begin(); it != mp.end(); it++) {
		//sprint(it->F),print(it->S);
		if(it->S > mx) {
			mx = it->S;
			p = it->F;
		}
	}
	ll c = 1, mxx = 0, P = ar[1];
	for(int i = 2; i <= n; i++) {
		if(ar[i] != ar[i - 1]) {
			if(c <= k)
				mpp[ar[i - 1]]++;
			else {
				ll d = 0;
				if(c > mxx) {
					mxx = c;
					P = ar[i - 1];
				}
				while(c > k) {
					d++;
					c -= k;
				}
				if(c != 0)
					d++;
				mpp[ar[i - 1]] += d;
			}
			c = 1;
		} else
			c++;
	}
	if(c >= 1) {
		if(c <= k)
			mpp[ar[n]]++;
		else {
			ll d = 0;
			while(c > k) {
				d++;
				c -= k;
			}
			if(c != 0)
				d++;
			mpp[ar[n]] += d;
		}
	}
	//print(ans);
	mx = 0;
	for(it = mpp.begin(); it != mpp.end(); it++) {
		//sprint(it->F),print(it->S);
		if(it->S > mx) {
			mx = it->S;
			p = it->F;
		}
	}
	ll ans3 = 0;
	c = 0;
	for(int i = 1; i <= n; i++) {
		if(ar[i] == P) {
			if(c == 0)
				continue;
			while(c > k) {
				ans3++;
				c-=k;
			}
			if(c != 0)ans3++;
			c = 0;
		} else
			c++;
	}
	if(c >=1) {
		while(c > k) {
			ans3++;
			c-=k;
		}
		if(c != 0)ans3++;
	}
	print(ans3);
	}
}
