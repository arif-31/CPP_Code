/*
* Code from
* Ali Ashadullah Arif
* IT-18031_*_2017-18
* Dept.Of.ICT,MBSTU
* Date:2020-04-28-22.35
* UVA - 10327
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	while(cin>>n and n) {
		int f,p,c=0,ff=0;
		int a[1005];
		for(int i=1; i<=n; i++)
			cin>>a[i];

		for(int i=1; i<=n; i++)
			for(int j=1; j<=n-i; j++) {
				if(a[j]>a[j+1]) {
					swap(a[j],a[j+1]);
					c++;
				}
			}
		cout<<"Minimum exchange operations : "<<c<<endl;
	}
	return 0;
}
