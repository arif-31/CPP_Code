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
int main()
{
	CASES{
		ll n,k;
		in2(n,k);
		ll ar[n + 1];
		map < ll, ll > mp;
		f(n)
		{
			in1(ar[i]);
			mp[ar[i]]++;
		}
		if(mp.size() == n)
		{
			print(n-1);
			continue;
		}
        
	}
}
///10 3
///1 2 1 3 1 4 1 4 2 1
