///contest name:Good Bye 2019
///A: Card Game
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k1,k2,K1[101],K2[101];
		cin>>n>>k1>>k2;
		int mk1=0;
		int mk2=0;
		for(int i=1; i<=k1; i++)
			cin>>K1[i];
		for(int i=1; i<=k2; i++)
			cin>>K2[i];
		for(int i=1; i<=k1; i++) {
			mk1=max(mk1,K1[i]);
		}
		for(int i=1; i<=k2; i++) {
			mk2=max(mk2,K2[i]);
		}

		mk1>mk2? cout<<"YES"<<endl:
		cout<<"NO"<<endl;
	}
}
