#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool sortbysec(const pair<int,int> &a,
			   const pair<int,int> &b)
{
	return (a.second < b.second);
}
int main()
{
	int node,edges;
	cin>>node>>edges;
	vector<int>vv[100];
	vector<pair<int,int>>v;
	for(int i=0; i<edges; i++) {
		int u,v;
		cin>>u>>v;
		vv[u].push_back(v);
		vv[v].push_back(u);
	}
	bool visited[node];
	int level[node];
	memset(visited,false,node);
	memset(level,0,node);
	for(int i=1; i<=node; i++) {
		v.push_back(make_pair(i,-1));
	}
	for(int i=0; i<v.size(); i++) {
		cout<<v[i].first<<" "<<v[i].second<<endl;

	}
	queue<int>q;
	int s;
	cin>>s;
//	v.erase(s,-1);
	q.push(s);
	visited[s]=true;
	level[s]=0;
	int c=0,f=0;
	while(!q.empty()) {
		int fr=q.front();
		cout<<"fr="<<fr<<endl;
//		cout<<"pop="<<q.pop()<<endl;
		q.pop();

		for(int i=0; i<vv[fr].size(); i++) {
			if(!visited[vv[fr][i]]) {
				visited[vv[fr][i]]=true;
				level[vv[fr][i]]=level[fr]+1;
				int l=level[vv[fr][i]]*6;
				int a=vv[fr][i];
				v.erase(v.begin()+a);
				v.push_back(make_pair(a,l));
				cout<<"holo"<<endl;
				cout<<l<<endl;
				cout<<a<<endl;

			}
		}
	}
	sort(v.begin(),v.end());

	for(int i=0; i<v.size(); i++) {
//		if(i!=v[i].first)
//			cout<<"-1 "<<v[i].first<<" ";
//		else
//		if(v[i].first==s)
//			cout<<""<<endl;
//		if(v[i].second>=1)
//			cout<<v[i].second<<" ";
//		else
//			cout<<"-1 ";
		cout<<v[i].first<<" "<<v[i].second<<endl;
//		cout<<v[i+1].second<<" ";
	}
	cout<<endl;
	main();

}
