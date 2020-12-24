#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--) {
		ll n,a=0;
		cin>>n;
		if(n==1)
			cout<<"-1"<<endl;
		else
		{
			for(int i=1; i<=n; i++)
			{
				a++;
				if(a==n)
				{
					cout<<"2"<<endl;
					break;
				}
				cout<<"3";

			}

		}



//        {
//            ll ans1=pow(10,n-1);
//           /// cout<<"ans1 = "<<ans1<<endl;
//            ll ans2=pow(10,n);
//            ///cout<<"ans2 = "<<ans2<<endl;
//            for(ll i=ans1; i<ans2; i++)
//            {
//                ll a=i,c;
//                ll b=i,f=0;
//                while(a!=0)
//                {
//                    c=a%10;
//                    a/=10;
//                    if(c==0 || b%c==0)
//                    {
//                        f=1;
//                        break;
//                    }
//                }
//                if(!f)
//                {
//                    cout<<b<<endl;
//                    cout<<b+1<<endl;
//                    break;
//
//                }
//            }
//        }
	}
}
