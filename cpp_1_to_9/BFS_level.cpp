#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
	int node,edges;
	cin>>node;
	vector<int>vv[100];
	for(int i=0; i<node-1; i++)
	{
		int u,v;
		cin>>u>>v;
		vv[u].push_back(v);
		vv[v].push_back(u);
	}
	bool visited[1000];
	int level[1000];
	for(int i=0; i<1000; i++)
	{
		visited[i]=false;
		level[i]=0;
	}
	queue<int>q;
	q.push(1);
	visited[1]=true;
	level[1]=1;
	int c=0,f=0;
	int t;
	cin>>t;
	while(!q.empty())
	{
		int fr=q.front();
		q.pop();
		for(int i=0; i< vv[fr].size(); i++)
		{
			///c=c+vv[fr].size();
			if(visited[vv[fr][i]]==false) {

				visited[vv[fr][i]]=true;
				q.push(vv[fr][i]);
				level[vv[fr][i]]=level[fr]+1;
				//c++;
				///cout<<"holo"<<endl;
				if(level[vv[fr][i]]==t) {
					c++;
				}
				if(level[vv[fr][i]]>t) {
					f=1;
					break;
				}
			}
//			if(level[vv[fr][i]]==t) {
//				c++;
//			}
		}
		if(f==1)break;
	}
	cout<<c<<endl;
	return 0;

}
