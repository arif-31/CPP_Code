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

//            Bit
#define Bit_off(val, pos) (val & (~(1 << pos)))
#define Bit_on(val, pos) (val | (1 << pos))
#define Bit_toggle(val, pos) (val ^ (1 << pos))
#define Bit_check(val, pos) (bool)(val & (1 << pos))
#define odd_even(val) (bool)(val & 1)
#define koita_1_ase(val) (__builtin_popcount(val))

ll power(ll x, unsigned long long y)
{
    ll res = 1; // Initialize result

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % MOD;

        // y must be even now
        y = y >> 1;        // y = y/2
        x = (x * x) % MOD; // Change x to x^2
    }
    return res % MOD;
}
ll MODOp(ll a, ll b)
{
    ll c = a % b;
    if (c < 0)
        c += b;
    return c;
}
ll iv[N + 1];
void MOD_inv()
{
    iv[1] = 1;
    for (ll i = 2; i <= N; i++)
    {

        iv[i] = (MOD - MOD / i * iv[MOD % i] % MOD) % MOD;
        //cout << iv[i] << endl;
    }
}

ll Logn(ll n, ll base)
{
    return (n > base - 1) ? 1 + Logn(n / base, base) : 0;
}
int isPrime[10000001];
vector<ll> v, w;
vector<vector<ll>> pff(1000000), pr(1000000);
void sieve()
{
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (isPrime[i] == 0)
        {
            //v.pb(i);
            for (int j = i + i; j <= 1000000; j = j + i)
            {
                isPrime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 1000000; i++)
        if (isPrime[i] == 0)
            v.pb(i);
    return;
}
/* 
   ***The vectore must be sorted in non-increasing order

   Lower Bound: lower_bound() method in C++ is used to 
   return the very first number in the container object 
   which is not less than the given value.

   Upper Bound: Upper Bound returns an iterator pointing
    element in the range that smaller than given value.
  
   Here,
     vector v = {30, 30, 30, 20, 20, 20, 10, 10};
       index --> 0   1    2   3   4   5   6   7
     Lower Bound of 20 = 3
     Upper Bound of 20 = 5
*/
int main()
{

    /* int n;
    in1(n);
    int gfg[n + 10];
    f(n) in1(gfg[i - 1]);
    vector<int> v(gfg, gfg + n);
    for (int i = 0; i < v.size(); i++)
        sprint(v[i]);
    print("");
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        sprint(v[i]);
    print("");
    /* for (auto i = vect.begin(), i = !vect.end(), ++i)
        vector<int> iterator low, up; */
    /*  vector<int>::iterator low, up;
    int t;
    in1(t);
    while (t--)
    {
        int b;
        in1(b);
        low = lower_bound(all(v), b);
        up = upper_bound(all(v), b);
        cout << (low - v.begin()) << endl;
        cout << v[(up - v.begin())] << endl;
        // sprint((upper - v.begin()));}
    } */

    /// **************Set************//

    /* int n;
    in1(n);
    set<int> Set;
    set<int>::iterator it, up, low;
    f(n)
    {
        int a;
        in1(a);
        Set.insert(a);
    }
    for (it = Set.begin(); it != Set.end(); it++)
        sprint(*it);
    print("");
    int t;
    in1(t);
    while (t--)
    {
        int cc;
        in1(cc);
        up = Set.lower_bound(cc);
        low = Set.lower_bound(cc);
        print(*up);
        print(*low);
    } */

    //convert string one case to another

    /* string s;
    in1(s);
    // upper to lower
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    print(s); */
    // main();
}