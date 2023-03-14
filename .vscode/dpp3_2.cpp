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

int binary_Search(vector<int> &v, int x)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    while (lo <= hi)
    {
        int mid = lo + ((hi - lo) >> 1);
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] > x)
        {
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    return -1;
}

void solve()
{
    input(int, p);
    vector<int> nums1, nums2;
    fr(i, 0, p)
    {
        input(int, x);
        nums1.pb(x);
    }
    fr(i, 0, p)
    {
        input(int, x);
        nums2.pb(x);
    }
    vector<int> v;
    for (auto x : nums1)
    {
        v.push_back(x);
    }
    for (auto x : nums2)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int n = v.size();
    double ans = -1;
    if (n % 2 != 0)
    {
        int x = v[n / 2];
        int p = binary_Search(v, x);
        ans = v[p];
    }
    else
    {
        int x = v[n / 2], y = v[n / 2 - 1];
        int p1 = binary_Search(v, x);
        int p2 = binary_Search(v, y);
        ans = double(v[p1] + v[p2]) / 2;
    }
    cout << ans;
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