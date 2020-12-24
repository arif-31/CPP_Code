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
void Binary_Table()
{
	ll n, w;
	in2(n, w);
	ll ar[n + 1];
	vector < int > v;
	ll sum = 0;
	map < ll, ll > mp;
	map < ll, ll > mpp;
	int f = 0;
	for(int i = n; i >= 1; --i) {
		in1(ar[i]);
		if(sum + ar[i] <= w and !f) {
			v.pb(i);
			sum += ar[i];
			if(sum >= w/2 and sum <= w) {
				f = 1;
			}
			mp[i] = 1;
		}
	}
//	if(v.size() == 0) {
//		print(-1);
//		return;
//	}
	if(sum >=(w/2) and sum <= w) {
		print(v.size());
		for(int i = 0; i < v.size(); i++)
			sprint(v[i]);
		print("");
	} else {
		vector < ll > vv;
		ll sum1 = 0;
		f = 0;
		for(int i = n; i >= 1; --i) {
			//in1(ar[i]);
			if(sum1 + ar[i] <= w and !mp[i] and !f) {
				vv.pb(i);
				sum1 += ar[i];
				if(sum >= w/2 and sum <= w) {
					f = 1;
					break;
				}
				mpp[i] = 1;
			}
		}
		if(sum1 < (w/2) and !f) {
			for(int i = n; i >= 1; --i) {
				//in1(ar[i]);
				if(sum1 + ar[i] <= (w) and !mpp[i] and !f) {
					vv.pb(i);
					sum1 += ar[i];
					if(sum1 >= w/2 and sum1 <= w) {
						f = 1;
						break;
						//mpp[i] = 1;
					}
				}
			}
			if(sum1 < (w/2) || vv.size() == 0 || !f) {
				print(-1);
				return;
			}
			sort(all(vv));
			print(vv.size());
			for(int i = 0; i < vv.size(); i++)
				sprint(vv[i]);
			print("");
		}
	}
}
void Binary_Table2()
{
	ll n,w, sum = 0;
	in2(n, w);
	vector < pair < ll, ll > > vp;
	f(n) {
		ll a;
		in1(a);
		vp.pb(make_pair(a, i));
	}
	sort(all(vp));
	vector < ll > v;
	for(int i = n - 1; i >= 0; --i) {
		if(sum + vp[i].F <= w) {
			v.pb(vp[i].S);
			sum += vp[i].F;
		}
	}
	if(sum >= (w + 1)/2) {
		print(v.size());
		for(int i = 0; i < v.size(); i++)
			sprint(v[i]);
		print("");
	} else
		print(-1);

}
void Division()
{
	ll a, b;
	in2(a, b);
	if(a % b != 0) {
		print(a);
		return;
	}
	ll mx = 0;
	for(ll i = 1; i <= sqrt(b); i++) {
		if(b % i == 0) {
			ll x = i;
			ll y = b/i;
			ll c = a;
			if(x != 1) {
				while(c % b == 0)
					c /= x;
				mx = max(mx, c);
			} else
				mx = max(mx, 1ll);
			c = a;
			if(y != 1) {
				while(c % b == 0)
					c /= y;
				mx = max(mx, c);
			} else
				mx = max(mx, 1ll);
		}
	}
	print(mx);
}
int main()
{
	CASES {
		//print(sqrt(1000000000000000000));
		//Binary_Table2();
		Division();
	}
}
