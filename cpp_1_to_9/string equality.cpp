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
//void solve_C()
//{
//	int n, k;
//	in2(n, k);
//	string a, b;
//	in2(a, b);
//	map < char, int > mp1, mp2;
//	map < char, int > :: iterator it;
//	for(int i = 0; i < n; i++)
//		mp1[a[i]]++;
//	for(int i = 0; i < n; i++)
//		mp2[b[i]]++;
//	int f = 1;
//	for(char i = 'a'; i < 'z'; i++) {
//		if(mp1[i] < mp2[i])
//			f = 0;
//		else {
//			int d = mp1[i] - mp2[i];
//			if(d % k != 0)
//				f = 0;
//			else
//				mp1[i + 1] += d;
//		}
//	}
//	if(!f)
//		print("No");
//	else
//		print("Yes");
//}
//void solve_D()
//{
//	ll d, k, x = 0, y = 0, c = 0;
//	in2(d, k);
//	while(d * d >= x * x + y * y) {
//		c++;
//		if(c & 1)
//			x += k;
//		else
//			y += k;
//	}
//	if(c & 1)
//		print("Utkarsh");
//	else
//		print("Ashish");
//}
///// Round 685 C
/// GLOBAL Round 11 A
void solveA()
{
	int n;
	in1(n);
	int ar[n + 1];
	int neg = 0, pos = 0, sum = 0;
	f(n) {
		in1(ar[i]);
 
		if(ar[i] >= 0)
			pos += ar[i];
		else
			neg += ar[i];
		sum += ar[i];
	}
	int mx = max(pos,abs(neg));
	if(sum == 0) {
		print("NO");
		return;
	}
	print("YES");
	sort(ar + 1, ar + 1 + n);
	if(mx == abs(neg)) {
		for(int i = 1; i <= n; i++)
			sprint(ar[i]);
		print("");
	} else {
		reverse(ar + 1, ar + 1 + n);
		for(int i = 1; i <= n; i++)
			sprint(ar[i]);
		print("");
	}
}
int main()
{
	CASES {
		solveA();
//		int n;
//		in1(n);
//		int ar[n + 1];
//		f(n)in1(ar[i - 1]);
//		vector < int > v;
//		sort(ar, ar + n);
//		int sum = ar[n - 1];
//		map < int, int > mp;
//		int ff = 0, cc = 0;
//		for(int i = n - 1; i >= 0; --i)
//		{
//			sum = ar[i];
//			mp.clear();
//			v.clear();
//			v.pb(sum);
//			int c = 1;
//			int j = 0;
//			while(1) {
//				if(sum - ar[j] != 0 and !mp[j]) {
//					v.pb(ar[j]);
//					mp[j] = 1;
//				}
//				j++;
//				if(j >= n) {
//					cc++;
//					j = 0;
//				}
//				if(cc >= 4)
//					break;
//			}
//			if(v.size() == n) {
//				print("YES");
//				for(int k = 0; k < v.size(); k++)
//					sprint(v[k]);
//				print("");
//				ff = 1;
//				break;
//			}
//		}
//		if(!ff)
//			print("NO");
	}
}

