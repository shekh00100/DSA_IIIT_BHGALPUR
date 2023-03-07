#include <bits/stdc++.h>
using namespace std;
#define fr(i, a, n) for (int i = a; i < n; ++i)
#define freq(i, a, n) for (int i = a; i <= n; ++i)
#define pb push_back
const int M = 1e9 + 7;
#define elif else if
#define str string
#define input(data, x) \
    data x;            \
    cin >> x;
#define vec(x, l) vector<x> l;
#define input_1(data, x, y) \
    data x, y;              \
    cin >> x >> y;
#define input_2(data, x, y, z) \
    data x, y, z;              \
    cin >> x >> y >> z;
#define output(arr)       \
    for (auto x : arr)    \
    {                     \
        cout << x << " "; \
    }
#define vecinput(n)             \
    for (int i = 0; i < n; ++i) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.pb(x)                 \
    };
typedef long long ll;

void solve()
{
    input(int, n);
    int n1 = 0, n2 = 0;
    int mask = 0;
    vec(int, v);
    fr(i, 0, n)
    {
        input(int, x);
        v.pb(x);
        mask ^= x;
    }
    mask = mask & (~(mask - 1));
    for (int i = 0; i < n; ++i)
    {
        if ((mask & v[i]) == 0)
        {
            n1 ^= v[i];
        }
        else
        {
            n2 ^= v[i];
        }
    }
    cout << n1 << " " << n2;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t-- > 0)
    {
        solve();
        cout << "\n";
    }
    return 0;
}