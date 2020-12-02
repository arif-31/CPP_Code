//বিসমিল্লাহির_রহমানির_রহীম
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define N 2000015
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define CASES \
    int t;    \
    cin >> t; \
    for (int T = 1; T <= t; T++)
#define F first
#define S second
#define pb push_back
#define mk make_pair
#define f(n) for (int i = 1; i <= n; i++)
#define print(x) cout << x << endl
#define sprint(x) cout << x << " "
#define in1(a) cin >> a
#define in2(a, b) cin >> a >> b
#define in3(a, b, c) cin >> a >> b >> c
#define in4(a, b, c, d) cin >> a >> b >> c >> d
int X, Y, GCD;
void Extended_Euclid(ll a, ll b)
{
    if (b == 0)
    {
        GCD = a;
        X = 1;
        Y = 0;
    }
    else
    {
        Extended_Euclid(b, a % b);
        int temp = X;
        X = Y;
        Y = temp - (a / b) * Y;
    }
}
ll Mod_inverse(ll a, ll m)
{
    a %= m;
    for (int i = 1; i < m; i++)
        if ((a * i) % m == 1)
            return i;
}
int main()
{
    // Extended Euclid

    /*  ll a, b;
    in2(a, b);
    Extended_Euclid(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << GCD << endl;
    sprint("The Co-officients of x and y are : ");
    sprint(X), print(Y);
    main(); */

    //Modular Multiplicative Inverse

    ll a, m;
    in2(a, m);
    print((Mod_inverse(a, m)));
    main();
}