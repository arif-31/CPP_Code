#include<bits/stdc++.h>
using namespace std;
queue<int>q;
vector<int>v[1000];
int vi[1000];
int l[1000];
void dfs(int s)
{
	vi[s]=true;
	for(int i=0; i<v[s].size(); i++) {
		if(vi[v[s][i]]==false) {
			dfs(v[s][i]);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n,e;
		cin>>n>>e;
		for(int i=1; i<=e; i++) {
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		///BFS AREA
		q.push(1);
		memset(vi,0,sizeof(vi));
		memset(l,0,sizeof(l));
//		vi[1]=1;
//		l[1]=0;
//		while(!q.empty()) {
//			int fr=q.front();
//			cout<<"fr="<<fr<<endl;
//			q.pop();
//			for(int i=0; i<v[fr].size(); i++) {
//				if(!vi[v[fr][i]]) {
//					cout<<vi[v[fr][i]]<<" ";
//					vi[v[fr][i]]=1;
//					l[v[fr][i]]=l[fr]+1;
//				}
//			}
//			cout<<endl;
//		}
		///DFS AREA
		int connect=0;
		for(int i=1; i<=n; i++) {
			if(vi[i]==false) {
				dfs(i);
				connect++;
			}
		}
		cout<<connect<<endl;

	}
}
