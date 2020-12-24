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

///November Cook Off 2020
//void solveA()
//{
//	int n, m, k;
//	in3(n,m,k);
//	int ar[n + 2][k + 2];
//	for(int i = 1; i <= n; i++)
//		for(int j = 1; j <= k + 1; j++)
//			in1(ar[i][j]);
//	int c = 0;
//	for(int i = 1; i <= n ; i++) {
//		int sum = 0;
//		for(int j = 1; j <= k; j++) {
//			sum += ar[i][j];
//		}
//		if(sum >= m and ar[i][k + 1] <= 10)
//			c++;
//	}
//	print(c);
//}
void solveB()
{
	string a, b;
	in2(a, b);
	int l = a.size();
	int p1 = 0, p2 = l - 1;
	for(int i = 0; i < l; i++)
		if(a[i] != b[i]) {
			p1 = i;
			break;
		}
	for(int i = l - 1; i >= 0; --i)
		if(a[i] != b[i]) {
			p2 = i;
			break;
		}
	if(a == b) {
		print(0);
		return;
	}
	print(p1);
	print(p2);
	for(int i = 1; i <= 2; i++) {
		for(int j = p1; j <= p2; j+=2) {
			{
				if(a[j] != b[j]) {
					if(a[j] == '1')
						a[j] = '0';
					else
						a[j] = '1';
				}

			}
		}
//		print(a);
//		print(b);
		if(a == b) {
			print(1);
			return;
		} else {
			print(2);
			return;
		}

	}
}
int main()
{
	CASES {
		//solveA();
		solveB();

	}
}


