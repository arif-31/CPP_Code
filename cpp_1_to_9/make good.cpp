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
		ll n;
		cin >> n;
		vector < ll > v(n);
		for(ll& x : v)
			cin >> x;
		ll f1 = 0, f2 = 0;
		for(ll i = n - 1; i > 0; --i)
		{
			if(v[i - 1] > v[i]) {
				f1 = 1;
				break;
			}
		}
		if(!f1)
			cout << "0\n";
		else
		{
			ll mx = v[n - 1], i = 0, j = 0;
			for( i = n - 1; i >= 0; --i)
			{
//                if(mx) {
//                    if(mx < v[i])
//                        break;
//                    else
//                        mx = v[i];
//                    //if(i == 0)
//                    continue;
//                }
				if(mx <= v[i])
					mx = v[i];
				else {
					for(j = i ; j >= 0; --j) {
						if(j == 0)
							break;
						if(v[j] < v[j - 1])
							break;
					}
					break;
				}

			}
			if(i == 0 || j == 0)
				cout << "0" << endl;
			else
				cout << j  << endl;
		}
	}
}
