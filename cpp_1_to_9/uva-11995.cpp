/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-04-24-18.53
 * UVA-11995 (I Can Guess the Data Structure!)
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define c1 cin>>n
//#define c2 cin>>n>>k
//#define o(n) cout<<n
//#define nl cout<<endl
//#define f(n) for(int i=1;i<=n;i++)
//#define fl(n) for(ll i=1;i<=n;i++)
//#define fe(n) for(int i=0;i<n;i++)
//#define fle(n) for(ll i=0;i<n;i++)
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF ) {
		queue<ll>q;
		priority_queue<ll>pq;
		stack<ll>s;
		//stack s;
		ll qq=0,pp=0,ss=0,c=0;
		ll ff=0,f1=0,f2=0,f3=0;
		for(int i=1; i<=n; i++) {

			ll a;
			cin>>a;
			ll b;
			cin>>b;
			if(a==1) {
				q.push(b);
				pq.push(b);
				s.push(b);
			}
			else if(a==2) {

				c++;
				if(b==q.front() && !q.empty()) {
					qq++;
					q.pop();
				}
				if(b==pq.top() && !pq.empty()) {
					pp++;
					pq.pop();
				}
				if(b==s.top() && !s.empty()) {
					ss++;
					s.pop();
				}
			}
		}
		if((c==ss && c==qq)||(c==ss && c==pp)||(c==pp && c==qq))
			cout<<"not sure"<<endl;
		else if(c==qq)
			cout<<"queue"<<endl;
		else if(c==pp)
			cout<<"priority queue"<<endl;
		else if(c==ss)
			cout<<"stack"<<endl;
		else
			cout<<"impossible"<<endl;
//        else if(f1==0 || f2==0 || f3==0)
//            cout<<"not sure"<<endl;
//		else if( c!=ss || c!=pp || c!=qq)
//			cout<<"impossible"<<endl;
//		else if(ss==c && pp==c and qq==c)
//			cout<<"not sure"<<endl;
	}
	//return 0;
}


