#include<bits/stdc++.h>
using namespace std;
bool vi[10000];
vector<int>v[1000];
int  dfs( int s)
{
    
	vi[s]=true;
	for(int i=0; i<v[s].size(); i++) {
		if(vi[v[s][i]]==false) {
			c++;
			if(v[s][i]==x) {
				break;
			}
			dfs(v[s][i]);
		}
	}
	return c;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v[1000];
	for(int i=0; i<n-1; i++) {
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int q,arr[1000];
	cin>>q;
	for(int i=0; i<q; i++)cin>>arr[i];
	int mn=10000,m;
	for(int i=0; i<q; i++) {
		memset(vi,false,n-1);
		m=dfs(1,arr[i],0);

		mn=min(m,mn);
		cout<<m<<" ";
		///if(m<)
	}
}
