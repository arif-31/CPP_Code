#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=1;
	cin>>n;
	for(int i=1; i<=n/2; i++) {
		if(i==n/2)
			sum=sum*(n-i);
		else
			sum=sum*i*(n-i);
	}
	cout<<sum*n<<endl;
	main();
	return 0;
}
