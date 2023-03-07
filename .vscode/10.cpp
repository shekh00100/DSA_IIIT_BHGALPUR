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
    int n = 9;
    input(int, i);
    int p = 1 << i;
    // find the ith bit
    int ans = n;
    ans &= p;
    cout << ans << endl;
    // set the ith bit
    int ans1 = n;
    ans1 |= p;
    cout << ans1 << endl;
    // clear the ith bit
    int ans2 = n;
    ans2 &= (~p);
    cout << ans2 << endl;
    // for clearing the rightmost bit
    int ans3 = n;
    cout << (ans3 & (ans3 - 1)) << endl;

    // for clear the other bits other than the rightmost bit
    int ans4 = n;
    cout << (ans4 & (~(ans4 - 1))) << endl;
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