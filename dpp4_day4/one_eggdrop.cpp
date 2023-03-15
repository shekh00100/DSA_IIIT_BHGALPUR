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

int power(int a, int b)
{
    // Fast exponetiation
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans *= a;
        }
        a *= a;
        b >>= 1; // right shift
    }
    return ans;
}

int egg_drop(int e, int f, vector<vector<int>> &dp)
{
    if (e == 0 || f == 1 || f == 0)
        return f;
    int min_attempts = INT_MAX;
    if (dp[e][f] != -1)
        return dp[e][f];
    for (int k = 1; k <= f; ++k)
    {
        int temp = max(egg_drop(e - 1, k - 1, dp), egg_drop(e, f - k, dp)) + 1;
        min_attempts = min(temp, min_attempts);
        dp[e][f] = min_attempts;
    }
    return dp[e][f];
}

void solve()
{
    input_1(int, e, f);
    vector<vector<int>> dp(e + 1, vector<int>(f + 1, -1));
    cout << egg_drop(e, f, dp);
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