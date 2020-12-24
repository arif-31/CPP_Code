#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c,k=1;
	cin>>n;
	vector<int>v[100];
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);

	}
	queue<int>q;
	int visit[100];
	for(int i=0; i<100; i++)
		visit[i]=0;

	int count[100];
	for(int i=0; i<100; i++)
		count[i]=0;

	q.push(1);
	visit[1]=1;
	int level[n+1]= {0};

	while(!q.empty())
	{
		int f=q.front();
		q.pop();
		c=0;
		visit[f]=1;
		for(int i=0; i<v[f].size(); i++)
		{
			if(visit[v[f][i]]==0)
			{
				level[v[f][i]]=level[v[f][i]]+1;
				q.push(v[f][i]);
			}

		}
		count[k]=c;

	}
	int t,ans=0;
	cin>>t;
	for(int i=1; i<=n; i++)
	{
		if(level[i]==t)



			ans++;
		//cout<<count[t]<<endl;
	}
	cout<<ans<<endl;




}

