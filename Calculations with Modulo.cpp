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
/* int modularExponentiation(int x, int n, int M)
{
    int result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            result = (result * x) % M;
        x = (x * x) % M;
        n = n / 2;
    }
    return result;
} */
int modInverse(int A, int M)
{
    Extended_Euclid(A, M);
    return (X % M + M) % M; //x may be negative
}
ll mul(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return res;
}
int main()
{
    ll a, b, c, m;
    in4(a, b, c, m);
    ll inc = modInverse(c, m);
    ll apb = mul(a, b, m);
    ll ans = ((apb % m) * (inc % m)) % m;
    print(ans % m);
}