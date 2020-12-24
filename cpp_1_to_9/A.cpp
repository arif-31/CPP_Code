#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEST int t;cin>>t;for(int i=1;i<=t;i++)
#define F first
#define S second
int main()
{
	TEST{
		ll NumberOfShovels,NumberOfPakages;
		cin>>NumberOfShovels>>NumberOfPakages;
		vector<ll>v;
		if(NumberOfPakages==1)
		{
			cout<<NumberOfShovels<<endl;
			continue;
		}
		if(NumberOfShovels<=NumberOfPakages)
		{
			cout<<"1"<<endl;
			continue;
		}
		if(NumberOfShovels%2==0)
		{
//			vector<ll>v;
			for(int i=2; i<=sqrt(NumberOfShovels); i++) {
				if(NumberOfShovels%i==0) {
					if(i*i==NumberOfShovels)
						v.push_back(i);
					else {
						v.push_back(i);
						v.push_back(NumberOfShovels/i);
					}
				}
			}
			sort(v.begin(),v.end());
			int f=0;
			for(int i=0; i<v.size(); i++) {
				if(v[i]<=NumberOfPakages) {
					cout<<v[i]<<endl;
					f=1;
					//cout<<"1"<<endl;
					break;
				}
			}
			if(!f)
				cout<<NumberOfShovels<<endl;
		} else{
//			vector<ll>v;
			for(int i=2; i<=sqrt(NumberOfShovels); i++)
			{
				if(NumberOfShovels%i==0) {
					if(i*i==NumberOfShovels)
						v.push_back(i);
					else {
						v.push_back(i);
						v.push_back(NumberOfShovels/i);
					}
				}
			}
			sort(v.begin(),v.end());
			int f=0;
			for(int i=0; i<v.size(); i++)
			{
				if(v[i]<=NumberOfPakages) {
					cout<<v[i]<<endl;
					f=1;
					//	cout<<"2"<<endl;
					break;
				}
			}
			if(!f)
				cout<<NumberOfShovels<<endl;
		}
		for(int i=0; i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
}
