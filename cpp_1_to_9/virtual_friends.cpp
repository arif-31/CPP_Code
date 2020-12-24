#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int p[100000];
int r[100000];
string visit;
for(int i=0;i<100000;i++){
	visit[i]=0;
}
void init(int n)
{
	while(n >= 0) {
		p[n] = n, r[n] = 1;
		n--;
	}
}
int find(int x)
{
	return p[x] == x ? x : (p[x]=find(p[x]));
}
int joint(int x, int y)
{
	x = find(x), y = find(y);
	if(x != y) {
		if(r[x] > r[y])
			r[x] += r[y], p[y] = x;
		else
			r[y] += r[x], p[x] = y;
     return 
     r[x]>=r[y]?  r[x] :  r[y];
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n,count=0;
		cin>>n;
		string s,s1,x;
		getline(cin,s);
		getline(cin,s1);
//		stringstream ss(s);
//		while(ss>>x) {
//			v.push_back(x);
		if(visit[s]=0) {
			count++;
			visit[s]=count;
			init(count);
		}
//		}
		if(visit[s1]==0) {
			count++;
			visit[s1]=count;
			init(count);
		}
		if(find(s)!=find(s1)) {
			joint(s,s1);

		}
	}
}
