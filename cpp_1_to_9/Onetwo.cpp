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
	int n;
	string a = "", b = "", c = "";
	cin >> n;
	//cout << log2(n) << endl;
	while(n) {
		a += (n % 2) + '0';
		n /= 2;
	}
	for(int i = a.size() ; i <= 24; i++ )
		c += '0';
	c += a;
	for(int i = c.size() - 1; i >=  0; --i)
		b += c[i];
	cout << b << endl;
	int k = 0;
	ll sum = 0;
	for(int i = b.size() - 1; i >= 0; --i) {
		sum += (b[i] - '0') * pow(2,k);
		k++;
	}
	cout << sum << endl;

	main();
}
