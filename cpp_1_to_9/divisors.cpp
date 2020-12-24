//             _..._
//           .'      '.      _
//          /     .-""-\   _/ \
//        .-|    /:.   |  |   |
//        |  \   |:.   /.-'-./
//        | .-' -;:__.'    =/
//       .'=    *=|BAN  _.='
//       /   _.   |    ;
//       ;-.-'|   \    |
//     /   |  \   _\  _\
//     \__/'._;.  ==' ==\
//              \    \   |
//              /    /   /
//              /-._/-._/
//              \   `\  \
//               `-._/._/ Built by Roll_No_31(ICT-15,MBSTU)
//                           "Let Work itself be the Ambition."
//
#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define ot cout
#define nl endl
#define fr(a,b) for(auto i=a;i<b;i++)
#define in cin
#define pll pair<ll,ll>
#define f first
#define s second
#define vpll vector<pll>
#define ump unordered_map
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define IN(a,b) ((a).find(b)!=(a).end())
#define pb push_back
#define mkp make_pair
#define PI 3.14159265
#define INF 1e18
#define deb(x) if(ON) cout << #x <<" : " << x << endl
#define fast ios_base::sync_with_stdio(false)
#define io cin.tie(NULL),cout.tie(NULL)
#define ON !false
ll countDivisors(ll n)
{
	int cnt = 0;
	for (ll i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			// If divisors are equal,
			// count only one
			if (n / i == i)
				cnt++;

			else // Otherwise count both
				cnt = cnt + 2;
		}

	}
	return cnt;
}



int main()
{
	int t;
	cin>>t;
	while(t--) {
		ll n,a,b,mx=0,m,count=0,index;
		cin>>a>>b;
		for(ll i=a; i<=b; i++) {
			m=countDivisors(i);
			//mx=(m,mx);
			if(m>mx) {
				index=i;
				count=m;
				mx=m;

			}
		}
		///cout<<divCount(n)<<endl;
        //Between 1 and 10, 6 has a maximum of 4 divisors.
        cout<<"Between "<<a<<" and "<<b<<", "<<index<<" has a maximum of "<<count<<" divisors."<<endl;
		///cout<<countDivisors(n)<<endl;

	}
	//main();
	return 0;
}








