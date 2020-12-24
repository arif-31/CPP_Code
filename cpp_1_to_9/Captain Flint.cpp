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
string to_binary(int a)
{
	string s = "";
	while(a) {
		int b = a % 2;
		a /= 2;
		b = b + '0';
		s += b;
	}
	string rs = "";
	for(int i = s.size() - 1; i >= 0; -- i)
		rs += s[i];
	return rs;
}
ll p2(int a)
{
	ll sum = 1;
	if(a == 0)
		return 1;
	for(int i = 1; i <= a; i++)
		sum *= 2;
	return sum;
}
int main()
{
	CASES{
		ll n;
		cin >> n;
		ll a = n / 4;
		if(n % 4 != 0)
			a++;
		ll b = n - a;
		f(b)cout << 9;
		f(a)cout << 8;
		cout << endl;
	}
}
