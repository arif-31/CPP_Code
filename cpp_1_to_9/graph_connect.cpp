#include <bits/stdc++.h>

using namespace std;
#include <cstring>
int p[26], r[26];
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
		return 1;
	}
	return 0;
}
int main()
{
	int t;
	//char s[10];
	string s;
	scanf("%d ", &t);
	while(t--) {
		getline(cin,s);
		init(s[0]-'A');
		int ans = s[0]-'A'+1;
		while(getline(cin,s)) {
			if(s[0] == '\0')
				break;
			ans -= joint(s[0]-'A', s[1]-'A');
		}
		printf("%d\n", ans);
		if(t)
			puts("");
	}
	return 0;
}
