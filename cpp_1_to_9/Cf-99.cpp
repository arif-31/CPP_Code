//বিসমিল্লাহির_রহমানির_রহীম
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define N 2000015
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define CASES \
    int t;    \
    cin >> t; \
    for (int T = 1; T <= t; T++)
#define F first
#define S second
#define pb push_back
#define f(n) for (int i = 1; i <= n; i++)
#define print(x) cout << x << endl
#define sprint(x) cout << x << " "
#define in1(a) cin >> a
#define in2(a, b) cin >> a >> b
#define in3(a, b, c) cin >> a >> b >> c
#define in4(a, b, c, d) cin >> a >> b >> c >> d
vector<ll> v;
map<ll, ll> mp;
void solve()
{
	ll sum = 0;
	for (int i = 1;; i++) {
		sum += i;
		if (sum >= 1000004)
			break;
		v.pb(sum);
		mp[sum] = 1;
	}
}
void solve_B()
{
	ll n, sum = 0;
	in1(n);
	if (mp[n] == 1) {
		for (int i = 0; i < v.size(); i++) {
			if (n == v[i]) {
				print(i + 1);
				return;
			}
		}
	}
	if (mp[n + 1] == 1) {
		n++;
		for (int i = 0; i < v.size(); i++) {
			if (n == v[i]) {
				print(i + 2);
				return;
			}
		}
	}
	ll b = n;
	ll mn1 = 9999999;
	for (int j = 1; j <= 1000; j++) {
		--b;
		int c = 0, f = 0;
		sum = 0;
		for (int k = n - b; k <= n; k++) {
			c++;
			sum += k;
			if (sum == b) {
				mn1 = c;
				f = 1;
				break;
			}
		}
		print(c);
		if (f)
			break;
	}
	/* ll mn2 = 9999999;
	for(int i = 0; i < v.size(); i++){

	} */
}
int main()
{
	solve();
	CASES {
		// solve_B();
		ll n, sum = 0, ff =  0;
		in1(n);
		if (mp[n] == 1)
		{
			for (int i = 0; i < v.size(); i++) {
				if (n == v[i]) {
				//print("nooo");
					print(i + 1);
					ff = 1;
					break;
				}
			}
		}
		if(ff)continue;
		if (mp[n + 1] == 1)
		{
			n++;
			for (int i = 0; i < v.size(); i++) {
				if (n == v[i]) {
				//print("yes");
					print(i + 2);
					ff = 1;
					break;
				}
			}
		}
		if(ff)continue;
		ll b = n;
		ll mn1 = 9999999;
		for (int j = 1; j <= 1000; j++)
		{
			--b;
			int c = 0, f = 0;
			sum = 0;
			int d = n - b;
			for (int k = n - b; k <= n; k++) {
				c++;
				sum += k;
				if (sum == b) {
					mn1 = c + d;
					f = 1;
					break;
				}
			}
			if (f)
				break;
		}
		print(mn1);
		/* ll mn2 = 9999999;
		for(int i = 0; i < v.size(); i++){

		} */
	}
}
