//https://www.hackerearth.com/fr/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef long long ll;
const int MAX = 1e5 + 5;

int readInt()
{
	int num, c;
	//cin >> num;
	while ((c = getchar_unlocked()) < '-');
	num = c - '0';
	while ((c = getchar_unlocked()) >= '0') {
		num = (num << 3) + (num << 1) + (c - '0');
	}
	return num;
}

int main()
{
	int t = readInt();
	while (t--) {
		int n, m;
		n = readInt();
		m = readInt();
		vector<int> v[MAX];
		vector<bool> vis(n + m + 1, false);
		vector<int> level(n + m + 1, 1);
		for (int i = 0; i < m; ++i) {
			int a, b;
			a = readInt();
			b = readInt();
			v[a].push_back(b);
			v[b].push_back(a);
		}
		queue<int> q;
		q.push(1);
		vis[1] = 1;
		level[1] = 0;
		while (!q.empty()) {
			int vertex = q.front();
			q.pop();
			for (int i = 0; i < v[vertex].size(); ++i) {
				if (!vis[v[vertex][i]]) {
					q.push(v[vertex][i]);
					vis[v[vertex][i]] = 1;
					level[v[vertex][i]] = level[vertex] + 1;
				}
			}
		}
		cout << level[n] << "\n";
	}

	return 0;
}

