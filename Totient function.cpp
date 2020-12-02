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
const ll number = 1000000;
ll ar[number + 10];
vector<ll> v;
void sieve()
{
    for (int i = 2; i * i <= number; i++)
    {
        if (!ar[i])
        {
            for (int j = i + i; j <= number; j += i)
                ar[j] = 1;
        }
    }
    for (int i = 2; i <= number; i++)
        if (ar[i] == 0)
            v.pb(i);
}
int main()
{
    //sieve();
    ll n;
    in1(n);
    ll ans = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            ans -= ans / i;
        }
    }
    if (n > 1)
        ans -= ans / n;
    cout << ans << endl;
    main();
}