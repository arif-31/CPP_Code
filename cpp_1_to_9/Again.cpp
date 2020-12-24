/*
 * Code from
 * Ali Ashadullah Arif
 * IT-18031_*_2017-18
 * Dept.Of.ICT,MBSTU
 * Date:2020-04-24-22.39
 * UVA - 11479 (Is this the easiest problem? )
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define c1 cin>>n
#define c2 cin>>n>>k
#define o(n) cout<<n
#define nl cout<<endl
#define f(n) for(int i=1;i<=n;i++)
#define fl(n) for(ll i=1;i<=n;i++)
#define fe(n) for(int i=0;i<n;i++)
#define fle(n) for(ll i=0;i<n;i++)
int main()
{
	int t;
	cin>>t;
	fl(t) {
		ll a,b,c;
		cin>>a>>b>>c;
		printf("Case %d: ",i);
		if(a==b and b==c)
			cout<<"Equilateral"<<endl;
		else if(a==b|| b==c || c==a)
			cout<<"Isosceles"<<endl;
		else if(a+b<=c || a+c<=b || b+c<=a)
			cout<<"Invalid"<<endl;
		else
			cout<<"Scalene"<<endl;
	}
	return 0;
}
