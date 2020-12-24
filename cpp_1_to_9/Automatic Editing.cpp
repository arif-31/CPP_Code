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

	int q;
	cin >> q;
	vector < string > v1;
	vector < string > v2;
	for(int i = 1; i <= q; i++) {
		string a, bb;
		//getchar();
		getline(cin, a);
		//getchar();
		getline(cin, bb);
		v1.pb(a);
		v2.pb(bb);
	}
	string b;
	//getchar();
	//getline(cin, a);
	getline(cin, b);
	getchar();
	cout << b << endl;
	
	for(int i = 0; i < q; i++) {
		string s1 = v1[i];
		string s2 = v2[i];
		for(int j = 0; j < b.size();) {
			string t = "";
			int kk = j;
			for(int k = j; k < s1.size() + kk; k++) {
				t += b[k];
			}
			cout << t << endl;
			if(t == s1) {
				b.replace(kk, kk + s1.size(), s2);
				cout << b << endl;
				j = 0;
			} else {
				j++;
			}
		}
	}
	cout << b << endl;
//	for(int i = 0; i < q; i++) {
//		string s1 = v1[i];
//		string s2 = v2[i];
//		for(int j = 0; j < b.size(); j++){
//
//		}
//	}
//	cout << b << endl;
}

