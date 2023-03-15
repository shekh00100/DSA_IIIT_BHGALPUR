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
#define output(arr) for(auto x:arr){cout<<x<<;}
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
int MCM(vector<int> &arr, int i , int j,vector<vector<int> > &dp){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j] = INT_MAX;
        for(int k =i;k<=j;k++){
            dp[i][j] = min(dp[i][j], MCM(arr,i,k,dp)+MCM(arr,k+1,j,dp) + (arr[i-1]*arr[k]*arr[j]));
        }
        return dp[i][j];

    }

   
void solve(){
    input(int,n);
   vec(int,arr);
   fr(i,0,n){
    input(int,x);
    arr.pb(x);
   }
   vector<vector<int> > dp(n+1,vector<int>(n+1,-1));
   cout<<MCM(arr,0,n-1,dp);

 
}
int main(){
int t=1; 
// cin>>t;
while(t-->0){
solve();
cout<<"\n";
}
return 0;
}