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
//#define vll vector<ll>
//#define vl vector<ll>
#define ot cout
#define nl endl
#define fr(a,b) for(ll i=a;i<b;i++)
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
ll dx[]= {0,-1,0,1};
ll dy[]= {1,0,-1,0};
const ll mod=1e9+7;
vector<ll>vll;
void sieve() {
        vll[2]
}
int main() {
	ll n;

	vector<ll>vl;
	ll d=0;
	fr(2,1000005) {
		ll f=0;
		for(ll j=2; j<i; j++) {

			if(i%j==0) {
				f=1;
				break;
			}
		}
		if(f==0)
		{
			d++;
			vll.pb(d);
		}
	}
	///cout<<endl;
	while(cin>>n and n) {
		cout<<n<< " = ";
		if(n<0) {
			cout<<"-1 x ";
			n=(-1)*n;
		}
		int then=0;
		for(ll i = 1; vll[i]*vll[i]<=n; i++) {
			if(n%vll[i]==0) {
				while(n%vll[i]==0) {

					n/=vll[i];
					then++;
					vl.pb(vll[i]);
				}
			}
		}
		for(ll i=0; i<vl.size(); i++) {
			if(i!=vl.size()-1)
				cout<<vl[i]<<" x ";
			else
				cout<<vl[i]<<endl;
		}
		vl.clear();

	}

}






