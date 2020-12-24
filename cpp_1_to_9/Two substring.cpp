/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-05-01-15.04
 * CF - Two Substring
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	cin>>s;
	int l=s.size();
	if(l<4)
		cout<<"NO"<<endl;
	else if((s[0]=='A' && s[1]=='B' )||(s[l-1]=='A' && s[l-2]=='B'))
		cout<<"YES"<<endl;
	else if((s[0]=='B' && s[1]=='A' )||(s[l-1]=='B' && s[l-2]=='A'))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	cout<<s[0]<<" "<<s[1]<<" "<<s[l-2]<<" "<<s[l-1]<<endl;
	//main();
}
