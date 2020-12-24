#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char>v;
vector<char>v1;
vector<char>v2;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		//int array[i];
		for(int i=0; i<n; i++) {
			//	cin>>array[i];
			char a;
			cin>>a;
			v.push_back(a);
		}
		for(int i=0; i<v.size(); i++) {
			if(v[i]=='2')  {
				v1.push_back('1');
				v2.push_back('1');
			}
			else if(v[i]=='1') {
				if(i==0) {
					v1.push_back('1');
					v2.push_back('0');
				}
				else {
					v1.push_back('0');
					v2.push_back('1');
				}

			}
			else if(v[i]=='0') {
				v1.push_back('0');
				v2.push_back('0');
			}
		}
		for(int i=0; i<v1.size(); i++)
			cout<<v1[i];
		cout<<endl;
		for(int i=0; i<v2.size(); i++)
			cout<<v1[i];
		cout<<endl;
		v1.clear();
		v2.clear();
		v.clear();
	}
}
