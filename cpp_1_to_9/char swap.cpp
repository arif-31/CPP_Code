#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEST int t;cin>>t;for(int T=1;T<=t;T++)
#define F first
#define S second
#define pb push_back
#define f(n) for(int i = 1; i <= n; i++)
int main()
{
	TEST{
		int n;
		cin >> n;
		string a, b;
		cin >> a >> b;
		char c1, c2;
		int c = 0, c3;
		for(int i = 0; i < n; i++)
		{
			if(a[i] != b[i]) {
				c++;
				if(c == 1)
					c1 = a[i], c3 = i;
				cout << a[c3] << " " << b[i] << endl;
				if(c == 2) {
					swap(b[i],a[c3]);
					cout << a << " " << b << endl;
					break;
				}
			}
		}
		if(a == b)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

