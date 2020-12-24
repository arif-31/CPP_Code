#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int l=s.length();
	int f=0,c=0;
	for(int i=0; i<l; i++) {
		cout<<s[i]<<" "<<s[l-i-1]<<endl;
		if(s[i]!=s[l-i-1]) {
			f=1;
			break;
		}
	}
//	if(f)
//		cout<<"no"<<endl;
//	else
//		cout<<"yes"<<endl;
	int l1=(l-1)/2,a=0;
	int l2=(l+3)/2,b=0;
	for(int i=0; i<l1; i++) {
		cout<<s[i]<<" "<<s[l1-i-1]<<endl;
		if(s[i]!=s[l1-i-1]) {
			a=1;
			break;
		}
	}
	for(int i=l2; i<l; i++) {
		cout<<s[i]<<" "<<s[l-i-1]<<endl;
		if(s[i]!=s[l-i-1]) {
			b=1;
			break;
		}
	}
	if(!f && !a && !b) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	main();

}
