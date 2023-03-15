#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,n) for(int i=a;i<n;++i)
#define freq(i,a,n) for(int i=a;i<=n;++i)
#define pb   push_back
const int M=1e9+7;
#define elif else if
#define str string
#define input(data,x) data x ;cin>>x;
#define vec(x,l) vector<x> l;
#define input_1(data,x,y) data x,y ;cin>>x>>y;
#define input_2(data,x,y,z) data x,y,z ;cin>>x>>y>>z;
#define output(arr) for(auto x:arr){cout<<x<<" ";}
#define vecinput(n) for(int i=0;i<n;++i){int x;cin>>x;v.pb(x)};
typedef long long ll ;

int power(int a,int b){
//Fast exponetiation
    int ans=1;
    while(b>0){
        if(b&1){
            //odd
            ans*=a;
        }
        a*=a;
        b>>=1;//right shift
    }
    return ans;
}
#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> &wt, vector<int> &val, int W, int n,vector<vector<int > > &dp)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n - 1] <= W)
    {
        int include = val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1, dp);
        int not_include = knapsack(wt, val, W, n - 1, dp);
        dp[n][W] = max(include, not_include);
    }
    else
    {
        dp[n][W] = knapsack(wt, val, W, n -1,dp);
    }
    return dp[n][W];
}
int main()
{   int n;cin>>n;
    int W;cin>>W;
    vector<int> wt,val;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        wt.pb(x);
    }
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        val.pb(x);
    }
    vector<vector<int > > dp(n+1,vector<int>(W+1,-1));
    cout<<knapsack(wt,val,W,n,dp);
}