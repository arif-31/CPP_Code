#include<bits/stdc++.h>
#include<sstream>
using namespace std;
//vector<int> p, r;
//inline void init(int n) {
//	p.resize(n);
//	r.resize(n);
//	for(int i=0; i<n; i++) p[i] = i;
//	for(int i=0; i<n; i++) r[i] = 0;
//}
//
//inline int getSet(int i) {
//	if(p[i] == i)
//		return i;
//	else
//		return p[i] = getSet(p[i]);
//}
//
//inline bool sameSet(int i, int j) {
//	int ii = getSet(i), jj = getSet(j);
//	return ii == jj;
//}
//
//inline void joinSet(int i, int j) {
//	if(sameSet(i, j)) return;
//	int a = getSet(i), b = getSet(j);
//	if(r[a] > r[b]) {
//		p[b] = a;
//	} else {
//		p[a] = b;
//		if(r[a] == r[b]) r[a]++;
//	}
//}
vector<int>parent,size;
void makeset(int n) {
	for(int i=0; i<n; i++) {
		parent[i]=i;
		size[i]=0;
	}
}
int findparent(int x) {
	if(x!=parent[x]) {
		return findparent(x);
	}
	else
		return x;
}
int CheckLink(int x, int y) {
	x = findparent(x), y = findparent(y);
	if(x != y)
		return 0;
	else
		return 1;
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
		///parent[py]=px;
		size[px]++;
	}
}
int main() {
//	int t;
//	cin>>t;
//	while(t--) {
//		int n;
//		makeset( n);
//		cin>>n;
//		string ch;
//		getline(cin,ch);
//		int a,b,f=0,l=0;
//		while(getline(cin,ch),ch!="") {
//			stringstream s(ch);
//			char c;
//			s>>c>>a>>b;
//			a--;
//			b--;
//			if(ch[0]=='c') {
//
//				union_set(a,b);
//				///continue;
//			}
//			else {
//				if(CheckLink(a,b)) {
//					f++;
//				}
//				else
//					l++;
//				///continue;
//			}
//		}
//		cout<<f<<" "<<l<<endl;
//	}
	int t,yes, no,comps;
	cin >> t;
	for(int tt=0; tt<t; tt++) {
		if(tt > 0) cout << '\n';

		string s;
		cin >> comps;
		getline(cin, s);
		makeset(comps);
	//	init(comps);
		yes = 0, no = 0;
		while(getline(cin, s), s!="") {
			stringstream ss(s);
			char c;
			long long a, b;
			ss >> c >> a >> b;
			a--;
			b--;
			if(c == 'c')union_set(a, b);
//			if(c == 'c')joinSet(a, b);
//			else sameSet(a, b) ? yes++ : no++;
			else CheckLink(a, b) ? yes++ : no++;
		}
		cout << yes << "," << no << '\n';
	}
	return 0;
}
