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
		ll sum = (n * (n + 1)) / 2;
		if(n == 3)
		{
			cout << 2 << endl;
			continue;
		}
		if(sum & 1)
			cout << "0" << endl;
		else
			cout << n / 2 << endl;
	}
}
