#include<bits/stdc++.h>
using namespace std;
int parent[26];
int size[26];
string s;
//int findParent(int i,int parent[])
//{
//    if(parent[parent[i]]!=parent[i])
//        parent[i]= findParent(parent[i],parent);
//    return parent[i];
//}
int findParent(int x)
{
	if(x!=parent[x]) parent[x]=findParent(parent[x]);
	return parent[x];
}
void union_set(int a,int b,int parent[],int size[])
{
	int parent_a=findParent(a);
	int parent_b=findParent(b);
	if(parent_a==parent_b) return;
	else if(parent_a>=parent_b) {
		size[parent_a]+=size[parent_b];
		parent[parent_b]=parent_a;
	} else {
		size[parent_b]+=size[parent_a];
		parent[parent_a]=parent_b;
	}
	return;

}
int main()
{
	int t;
	cin>>t;
	while(t--) {

		string s1;
		getchar();
		getline(cin,s1);
		int ss=s1[0];
//		cout<<"ss="<<ss<<endl;
		int n=ss-65+1;
//		cout<<"N="<<n<<endl;
		int l=n;
		for(int i=1; i<=n; i++) {
			parent[i]=i;
			size[i]=1;
			//cout<<"holo"<<endl;
		}
		int x,y,ans=0;
		while(1) {
			if(getline(cin,s1)) {
				if(s1[0]=='\0')
					break;
			}
			x=s1[0]-'A';
//			cout<<"x="<<x<<endl;
			y=s1[1]-'A';
//			cout<<"y="<<y<<endl;
			if(findParent(x)!=findParent(y)) {
				union_set(x,y,parent,size);
				ans++;
//				cout<<"ANS= "<<ans<<endl;
//				cout<<"holo1"<<endl;
			}

		}
		cout<<l-ans<<endl;

		if(t)
			puts("");
	}

}


