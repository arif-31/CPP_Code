/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-05-01-15.04
 * Throwing cards away II (UVA - 10940)
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	while(cin>>n ) {
		if(n==0)
			break;
		queue<ll>q;
		queue<ll>qq;
		if(n==1) {
			//cout<<"Discarded cards:"<<endl;
			//cout<<"Remaining card: "<<n<<endl;
			cout<<n<<endl;
		} else {
			for(ll i=1; i<=n; i++) {
				q.push(i);
			}
			while(q.size()>1) {
				ll f=q.front();
				qq.push(f);
				q.pop();
				ll f2=q.front();
				q.pop();
				q.push(f2);

			}
			//cout<<"Discarded cards: ";
			while(qq.size()>1) {
				//cout<<qq.front()<<", ";
				qq.pop();
			}
			//cout<<qq.front()<<endl;
			//cout<<"Remaining card: "<<q.front()<<endl;
			cout<<"ans = "q.front()<<endl;
			cout<<q.front()<<endl;
			while(!q.empty())
				q.pop();
			while(!qq.empty())
				qq.pop();
		}
	}
	return 0;
}
