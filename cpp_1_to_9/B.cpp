//#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEST int t;cin>>t;for(int i=1;i<=t;i++)
#define F first
#define S second
int main()
{
	TEST{
		string s;
		cin>>s;
		int c=0;
		for(int i=0; i<s.size()-1; )
		{
		
			//if(( s[i]=='0' and s[i+1]=='1')||( s[i]=='1' and s[i+1]=='0' )||(( s[i]=='1' and s[i-1]=='0'  ) and i-1>=0)||(( s[i-1]=='1' and s[i]=='0' ) and i-1>=0)) {
			if(( s[i]=='0' and s[i+1]=='1')||( s[i]=='1' and s[i+1]=='0' )) {
				c++;
				int k=i;
				s.erase(s.begin()+k);
				s.erase(s.begin()+k+1);
				cout<<s<<endl;
				//s.erase(s.begin()+i);
				i=0;
			//	continue;

			} 
			else
			i++;

		}
		if(c%2==0)
			cout<<"NET"<<endl;
		else
			cout<<"DA"<<endl;
	}

	return 0;
}
