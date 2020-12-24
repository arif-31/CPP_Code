#include<bits/stdc++.h>
using namespace std;

int parent[10000]= {0}; ///for conncted graph
int size[10000]= {0}; ///size of graph

void makeset(int n)
{
	for(int i=0; i<n; i++)
	{
		parent[i]=i;
		size[i]=1;///rank
	}
}
int findparent(int x,int parent[])
{
	if(x!=parent[x])
	{
		return parent[x] = findparent(parent[x]);

	}
	else return x;
//    if(x==parent[x])
//        return x;
//    return findparent[x];
}
void union_set(int x,int y)
{

	int px=findparent(x);
	int py=findparent(y);
	if(px==py)return;

	else if(size[px]<size[py])
		parent[px]=y;
	else if(size[px]>size[py])
		parent[py]=x;
	else
	{
		parent[py]=px;
		size[px]++;
	}
}
int main()
{
	int node,edge,a,b;
	cin>>node>>edge;
	makeset(node);
	for(int i=0; i<edge; i++)
	{
		cin>>a>>b;
		union_set(a,b);


	}
	/* for(int i=0; i<node; i++)
	 {
	     cout<<"Node is "<<i<<" parent is "<<parent[i]<<" rank is "<<size[i]<<endl;
	 }
	 */
	int nos=0;
	for(int i=0; i<node; i++)
	{
		if(findparent(i,parent)==i)///this condition is true only for disjoint connected components
		{
			printf("%d leader %d size\n",i,size[i]);
			nos++;
		}

	}

}
///input
/*
 5 4
 0 1
 4 3
 3 1
 0 3
 */


