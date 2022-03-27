//বিসমিল্লাহির_রহমানির_রহীম
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define PI acos(-1.0)
#define N 2000015
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define ar1_sort(a, n) sort(a + 1, a + 1 + n)
#define ar0_sort(a, n) sort(a, a + n)
#define CASES \
 	int t;	\
 	cin >> t; \
 	for (int T = 1; T <= t; T++)
#define PRINT_CASE	   printf("Case %d: ",T)
#define LINE_PRINT_CASE  printf("Case %d:\n",T)
#define CASE_PRINT	   cout<<"Case "<<T<<": "
#define F first
#define S second
#define pb push_back
#define f(n) for (int i = 1; i <= n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(x) cout << x << endl
#define sprint(x) cout << x << " "
#define in1(a) cin >> a
#define in2(a, b) cin >> a >> b
#define in3(a, b, c) cin >> a >> b >> c
#define in4(a, b, c, d) cin >> a >> b >> c >> d
#define ll			   long long
#define int			   long long

using namespace std;

ll MAX(ll a, ll b)
{
	if (a >= b)
		return a;
	return b;
}
ll MIN(ll a, ll b)
{
	if (a <= b)
		return a;
	return b;
}
main() {

	CASES{
		int n;
		cin>>n;
		int fact[100005];
		fact[1]=1;
		int sz=1;

		for(int i=2;i<=n;i++)
		{
			int nw_sz=sz;
			int carry=0;

			for(int j=1;j<=sz;j++)
			{
				int ans=(fact[j]*i)+carry;
				fact[j]=ans%10;
				carry=ans/10;
			}

			while(carry)
			{
				sz++;
				fact[sz]=carry%10;
				carry/=10;
			}
		}
		for(int i=sz;i>=1;--i)
			cout<<fact[i];
		cout<<endl;

	}
	return 0;
}

