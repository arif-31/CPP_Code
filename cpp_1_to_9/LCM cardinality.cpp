//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	int n;
//	while(cin>>n and n) {
//		int a,b;
//		cin>>a,b;
//		int g=__gcd(a,b);
//		int l=(b/g)*a;
//		cout<<g<<" "<<l<<endl;
//	}
//}
#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	int r = 0, a, b;
	a = (m > n) ? m : n;
	b = (m < n) ? m : n;
	r = b;
	while (a % b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return r;
}
int lcm(int m, int n)
{
	int a;
	a = (m > n) ? m: n;
	while (true) {
		if (a % m == 0 && a % n == 0)
			return a;
		++a;
	}
}
int main( )
{
	//cout << "Enter the two numbers: ";
	int m, n;
	cin >> m >> n;
	//cout << "The GCD of two numbers is: " << gcd(m, n) << endl;
	//cout << "The LCM of two numbers is: " << lcm(m, n) << endl;
	cout<<gcd(m,n)<<" "<<lcm(m,n)<<endl;
	main();
	return 0;
}
