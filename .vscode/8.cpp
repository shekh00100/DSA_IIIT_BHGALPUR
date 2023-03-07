// In this we have to represent the a set in integer
// For eg given set is {1,2,3,6};
// so we set the the binary digits of a given element in set
// for 2 templatwe set the second bit of the 32 bit number
// 0000....0000100 // this for the element 2
// and for 3 the binary number is 0000....0001100
// the code is
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

void toBinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        cout << (k & 1);
    }
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
        m = a << x;
    }
    toBinary(m);
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