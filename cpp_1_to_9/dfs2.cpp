#include<bits/stdc++.h>
using namespace std;
queue<int>q;
vector<int>v[1000];
int vi[1000];
int l[1000];
int c=1;
int  dfs(int s)
{
//	int c=1;
	vi[s]=true;
//	c=c+v[s].size();
	for(int i=0; i<v[s].size(); i++) {
		if(vi[v[s][i]]==false) {
			//cout<<v[s][i]<<" ";
			c++;
			dfs(v[s][i]);
		}
	}
	//cout<<"c="<<c<<endl;
	return c;
}
int main()
{
//	int t;
//	cin>>t;
	//while(t--) {
	int n,e;
	cin>>n>>e;
	for(int i=1; i<=e; i++) {
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	memset(vi,0,n);
	memset(l,0,n);
	int x;
	cin>>x;
	//while(cin>>x and x) {
	//	v.clear();
	memset(vi,0,sizeof(vi));
	memset(l,0,sizeof(l));
	int y = dfs(x);
	//cout<<endl;
	//cout<<y<<endl;
	cout<<n-y<<endl;
	//}


	///DFS AREA
//			int connect=0;
//			for(int i=1; i<=n; i++) {
//				if(vi[i]==false) {
//					dfs(i);
//					connect++;
//				}
//			}
//			cout<<connect<<endl;



	//}
}
