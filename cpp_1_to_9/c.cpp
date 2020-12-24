#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEST int t;cin>>t;for(int i=1;i<=t;i++)
#define F first
#define S second
int main()
{
	TEST{
		string s;
		cin>>s;
		int l=s.size();
		int res=0;
		int cur;
		bool ok;
		ll L;
		for(L=1;; L++)
		{
		    
			cur=L;
			ok=true;
			for(int j=0; j<l; j++) {
				res=res+1;
				if(s[j]=='+')
					cur++;
				else
					cur--;
				if(cur<0) {
					ok=false;
					break;
				}
			}
			if(ok)
				break;
		}
		cout<<L<<endl;
		cout<<res<<endl;
	}

}
