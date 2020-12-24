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
#define a0sort(a) sort(a, a + n)
#define asort(a) sort(a + 1, a + 1 + n)
void digit_game()
{
	string s, ss = "";
	int n;
	cin >> n;
	cin >> s;
	if(n & 1) {
		for(int i = 0; i < n; i++) {
			if((i + 1) & 1) {
				int a = s[i] - '0';
				if(a & 1) {
					print(1);
					return;
				}
			}
		}
		print(2);
	} else {
		for(int i = 0; i < n; i++) {
			if((i + 1) % 2 == 0) {
				int a = s[i] - '0';
				if(a % 2 == 0) {
					print(2);
					return;
				}
			}
		}
		print(1);
	}

}
void Sage_birthday()
{
	int n;
	in1(n);
	ll ar[n + 1];
	ll arr[n + 1];
	f(n)in1(ar[i]);
	asort(ar);
	vector < ll > v;
	ll a = 1, b = n;
	if(n & 1)
		b = (n/2)+1;
	else
		b = (n/2);
	//int c = 2;
	for(int i = 1, c = 2; i <= n/2; i++, c += 2)
		arr[c] = ar[i];
	for(int i = (n/2) + 1, c = 1; i <= n; i++, c += 2)
		arr[c] = ar[i];
	int c = 0;
	for(int i = 2; i < n; i++) {
		if(arr[i] < arr[i + 1] and arr[i] < arr[i - 1])
			c++;
	}
	print(c);
//	if(c == 0)
//		return;
	for(int i = 1; i <= n; i++)
		sprint(arr[i]);
	print("");
}
void Killijoy()
{
	int n, x;
	in2(n, x);
	int ar[n + 1];
	ll extra = 0, need = 0;
	f(n) {
		in1(ar[i]);
		if(x >= ar[i])need += abs(x - ar[i]);
		else extra += abs(x - ar[i]);
	}
	sprint(extra),print(need);
}
int main()
{

	CASES {
		//digit_game();
		//Sage_birthday();
		Killijoy();
	}
}
