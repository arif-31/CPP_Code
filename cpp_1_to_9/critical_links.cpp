/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:07/04/2020
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		vector<int>v[100];
		int n,tt;
		char c;
		cin>>n>>c>>tt>>c;
		for(int i=0; i<tt; i++) {
			int a;
			cin>>a;
            v[n].push_back(a);
            v[a].push_back(n);
		}
	}
	
	cout<<v.size()<<endl;
}

