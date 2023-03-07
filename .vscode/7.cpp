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

vector<vector<int>> all_subsets;
void generate(vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        all_subsets.push_back(subset);
        return;
    }
    generate(subset, i + 1, nums);
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}

void solve()
{
    input(int, n);
    vec(int, v);
    int a = 1, m;
    fr(i, 0, n)
    {
        input(int, x);
        v.pb(x);
    }
    vector<int> empty;
    generate(empty, 0, v);
    for (auto y : all_subsets)
    {
        output(y);
        cout << endl;
    }
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