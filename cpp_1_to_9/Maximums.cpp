#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 10000003
ll a[M],b[M];
int main()
{

    ll n,sum=0,sl;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(ll i=1; i<=n; i++)
    {
         b[i]=a[i]+sum;
         cout<<b[i]<<" ";
         sum=max(sum,b[i]);
    }
    cout<<endl;
    //main();


}
