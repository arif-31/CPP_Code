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
/// Codeforces Round 686 (Div 3) C
void solve_C()
{
	int n;
	in1(n);
	map < int, int > mp;
	map < int, int > mpp;
	map < int, int > :: iterator it;
	int ar[n + 1];
	f(n) {
		in1(ar[i]);
		mpp[ar[i]]++;
	}
	if(mpp.size() == n) {
		print(1);
		return;
	} else if(mpp.size() == 1) {
		print(0);
		return;
	} else {

		int a = 0, b = 0, c  = 0;
		f(n) {
			if(ar[i] == ar[i + 1] and i + 1 <= n)continue;
			if(i != 1)
				mp[ar[i]]++;
		}
		set < int > st;
		st.insert(ar[n]);
		for(int i = n - 1; i >= 1; --i) {
			if(!st.count(ar[i])) {
				mp[ar[i]]++;
				st.insert(ar[i]);
			}
		}
		ll mx = 999999999999, pos = -1;
		for(it = mp.begin(); it != mp.end(); it++) {
			if(it->S  < mx) {
				mx = it->S;
				pos = it->F;
			}
		}
		print(mx);
	}
}
void solve_D()
{
	ll n;
	in1(n);
	int prime = 0;
	vector < ll > v;
	vector < ll > vs;
	ll s = 1, NN = n;
	vs.pb(n);
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			ll a = n;
			v.clear();
			int c = 0;
			while(a % i == 0) {
				v.pb(i);
				a /= i;
				c++;
			}

			if(s < v.size()) {
				vs = v;
				s = v.size();
				NN = a * i;
			}
		}
	}
	print(s);
	if(s != 1)
		for(int i = 0; i < s - 1; i++)
			sprint(vs[i]);
	sprint(NN);
	print("");
}
void solve_AA()
{
	int n;
	in1(n);
	if(n == 2)
		cout << "1\n2\n";
	else {
		print(n);
		f(n)
		sprint(i);
		print("");
	}
}
void Buy_string()
{
	int n,a,b,h;
	in4(n, a, b, h);
	string s;
	in1(s);
	int zero = 0, one = 0;
	for(int i = 0; i < n; i++)
		if(s[i] == '1')one++;
		else zero++;
	int x1 = h * one + n * a;
	int x2 = h * zero + n * b;
	int x3 = a * zero + one * b;
	cout << x1 << " " << x2 << " " << x3 << endl;
	print(min({x1, x2, x3}));
}
void Sum_Medians()
{
	ll n, k;
	in2(n, k);
	ll med[n * k + 1];
	ll nk = n * k;
	f(nk)in1(med[i]);
	ll sum = 0, cc = 0, c = 0;
	if(n == 1) {
		for(ll i = 1; i <= n * k; i ++)
			sum += med[i];
		print(sum);
		return;
	}
	if(n <= 2) {
		for(ll i = 1; i <= n * k; i += 2)
			sum += med[i];
	} else {
		ll d = n/2;
		ll a = d;
		if(n&1) {
			d++;

			for(ll i = (n * k) - a, j = 1; i >= 1, j <= k; i -= (d), j++) {
				sum += med[i];
				//sprint(med[i]);
			}
		} else
			for(ll i = (n * k) - a, j = 1; i >= 1, j <= k; i -= (d + 1), j++) {
				sum += med[i];
				//sprint(med[i]);
			}
	}
	print(sum);

}
int main()
{
	CASES {
		//solve_C();
		//solve_D();
		//solve_AA();
		//Buy_string();
		Sum_Medians();
	}
}


