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
void A()
{
	int n;
	in1(n);
	ll sum = 0;
	int ar[n + 1];
	f(n) {
		in1(ar[i]);
	}
	ll c = 0;
	f(n) {
		c+=ar[i];
		sum += ar[i];
		if(sum == 0)
			break;
		sum--;
	}
	print(c);
}
int main()
{
	CASES {
		ll x, y, n;
		in3(x, y, n);
		ll c = 0;
		for(int i = 0; i <= n; i++)
		{
			ll b = x ^ i;
			ll d = y ^ i;
			//cout << b << " " << d << endl;
			if(b < d) {
				c++;
			}
		}
		print(c);
	}
}
