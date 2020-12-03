//বিসমিল্লাহির_রহমানির_রহীম
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define N 2000015
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define ar_sort(a, n) sort(a + 1, a + 1 + n)
#define arr_sort(a, n) sort(a, a + n)
#define CASES \
    int t;    \
    cin >> t; \
    for (int T = 1; T <= t; T++)
#define F first
#define S second
#define pb push_back
#define f(n) for (int i = 1; i <= n; i++)
#define print(x) cout << x << endl
#define sprint(x) cout << x << " "
#define in1(a) cin >> a
#define in2(a, b) cin >> a >> b
#define in3(a, b, c) cin >> a >> b >> c
#define in4(a, b, c, d) cin >> a >> b >> c >> d
//10 20 30 40 40 50 60
void binary_search(int ar[], int n, int key)
{
    int begin = 1;
    int end = n;

    //if search only element index

    /* 
    while (begin <= end)
    {
        int mid = (begin + end) / 2;
        if (ar[mid] == key)
        {
            print(mid);
            return;
        }
        if (ar[mid] < key)
            begin = mid + 1;
        else
            end = mid - 1;
    }
     */

    // if search at first element index that
    // means left fast index
    // or same as insert an element at right position
    // lower bound index of key value
    int index = 0;
    while (begin <= end)
    {
        int mid = (begin + end) / 2;
        if (ar[mid] == key)
        {
            index = mid;
            begin = mid + 1;
            sprint("index = ");
            print(index);
        }
        if (ar[mid] < key)
            begin = mid + 1;
        else
            end = mid - 1;
    }
    print(begin);
    ar[begin] = key;
    for (int i = 1; i <= n; i++)
        sprint(ar[i]);
    print("");
}
int main()
{
    CASES
    {
        int n;
        cin >> n;
        int ar[n + 10];
        f(n) cin >> ar[i];
        ar_sort(ar,n);
        int cc = 3;
        while (cc--)
        {
            int key;
            cin >> key;
            binary_search(ar, n, key);
            /*  for (int i = 1; i <= n; i++)
                sprint(ar[i]);
            print(""); */
        }
    }
}