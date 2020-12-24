#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define m 10005
#define pb push_back
//bool visit[10005];
//int level[10005];
//queue<int>Q;
//vector<int>v[10005];
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n,e;
		cin>>n>>e;
		vector<int>v[10005];
		for(int i=0; i<e; i++) {
			int a,b;
			cin>>a>>b;
			v[a].pb(b);
			v[b].pb(a);
		}
		int m,t,ans=0,f=0;
		//cin>>m>>t;
		bool visit[10005];
		int level[10005];
		queue<int>Q;
		//vector<int>v[10005];
		for(int i=0; i<10005; i++) {
			visit[i]=false;
			level[i]=0;
		}
		visit[1]=true;
		level[1]=0;
		Q.push(1);
		while(!Q.empty()) {
			int fr=Q.front();
			Q.pop();
			for(int i=0; i<v[fr].size(); i++) {
				if(!visit[v[fr][i]]) {
					visit[v[fr][i]]=true;
					level[v[fr][i]]=level[fr]+1;
					Q.push(v[fr][i]);

				}
			}
		}
		cout<<level[n]<<endl;
	}



}



