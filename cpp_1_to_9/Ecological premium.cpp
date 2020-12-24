//বিসমিল্লাহির_রহমানির_রহীম
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define N 2000015
#define M 1000000007
#define all(x) x.begin(),x.end()
#define CASES int t;cin>>t;for(int T=1;T<=t;T++)
#define F first
#define S second
#define pb push_back
#define f(n) for(int i = 1; i <= n; i++)
int main()
{

	CASES{
		int q;
		cin >> q;
		ll sum = 0;
		while(q--)
		{
			int t, a, l;
			cin >> t >> a >> l;
			ll ans = t * l;
			sum += ans;
		}
		cout << sum << endl;
	}
}
