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
vector < ll > pp;
set < ll > P;
int ar[1000];
void sieve()
{
	for(int i = 2; i * i <= 100; i++)
		if(!ar[i])
			for(int j = i + i; j <= 100; j += i)
				ar[j] = 1;
	for(int i = 2; i <= 100; i++)
		if(ar[i] == 0)
			P.insert(i);

}
void display(int a[], int n)
{
	int f = 1,ff = 1,l, sum;
	for(int i = 1 ; i < n; i++) {
		l = a[i];
		if(!P.count(l + f)) {
			ff = 0;
			break;
		}
		f = a[i];
	}
	if(!P.count(1 + a[n - 1]))
		ff = 0;
	if(!ff)
		return;
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}
void findPermutations(int a[], int n)
{
	sort(a, a + n);
	do {
		if(a[0] != 1)
			return;
		display(a, n);
	} while (next_permutation(a, a + n));
}
int main()
{

	int n;
	int c = 1;
	sieve();
	while(cin >> n) {
		int a[n];
		printf("Case %d: ", c);
		for(int i = 0; i < n; i++)
			a[i] = i + 1;
		findPermutations(a, n);
		c++;
		print("");
	}

	return 0;
}

