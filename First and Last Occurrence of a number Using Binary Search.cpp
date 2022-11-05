//বিসমিল্লাহির_রহমানির_রহীম
#include <bits/stdc++.h>
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
#define lp(n) for (int i = 1; i <= n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(x) cout << x << endl
#define sprint(x) cout << x << " "
#define in1(a) cin >> a
#define in2(a, b) cin >> a >> b
#define in3(a, b, c) cin >> a >> b >> c
#define in4(a, b, c, d) cin >> a >> b >> c >> d
#define ll			   long long
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

 
/// First and Last Occurrence of a number Using Binary Search
int main()
{
	CASES
	{
		ll n,val;
		cin>>n>>val;
		ll ar[n+10];
		lp(n)cin>>ar[i-1];
		ll l=0,h=n-1,ans1=-1,ans2=-1;
		vector<ll>v(2,-1);
		while(l<=h)
		{
			ll m=(l+h)/2;
			if(ar[m]==val){
				 v[0]=m;
				 h=m-1;
			}
			if(ar[m]<val)l=m+1;
			else if(ar[m]>val)h=m-1;

		}
        l=0,h=n-1;
		while(l<=h)
		{
			ll m=(l+h)/2;
			if(ar[m]==val){
				 v[1]=m;
				 l=m+1;
			}
			if(ar[m]<val)l=m+1;
			else if(ar[m]>val)h=m-1;

		}
		sprint(v[0]),print(v[1]);

	}
 
    
}


