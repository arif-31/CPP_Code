//#include<bits/stdc++.h>
//using namespace std;
//int findParent(int i,int parent[])
//{
//	if(parent[parent[i]] != parent[i])
//		parent[i] = findParent(parent[i],parent);
//	return parent[i];
//}
//void union_set(int a,int b,int parent[],int size[])
//{
//	int parent_a = findParent(a,parent);
//	int parent_b = findParent(b,parent);
//	if(parent_a == parent_b) return;
//	else if(parent_a >= parent_b)
//	{
//		size[parent_a] += size[parent_b];
//		parent[parent_b] = parent_a;
//	}
//	else
//	{
//		size[parent_b] += size[parent_a];
//		parent[parent_a] = parent_b;
//	}
//	return;
//
//}
//int main()
//{
//	int node,edge,a,b;
//	cin>>node>>edge;
//	int parent[100004]= {0};
//	int size[100004]= {0};
//	for(int i=1; i<=node; i++)
//	{
//		parent[i]=i;
//		size[i]=1;
//	}
//	for(int i=1; i<=edge; i++)
//	{
//		cin>>a>>b;
//		union_set(a,b,parent,size);
//	}
//	for(int i=1; i<=node; i++)
//		printf("Node %d belongs to connected component %d\n",i,findParent(i,parent));
//	int connected_component=0;
//	for(int i=1; i<=node; i++)
//	{
//		if(findParent(i,parent)==i)
//		{
//			cout<<i<<" is a leader of size "<<size[i]<<endl;
//			connected_component++;
//		}
//
//	}
//	cout<<"connected graph = "<<connected_component<<endl;
//
//}
#include<bits/stdc++.h>
using namespace std;
int main() {
	char n;
	cin>>n;
	int a=n;
	cout<<a<<endl;

}



