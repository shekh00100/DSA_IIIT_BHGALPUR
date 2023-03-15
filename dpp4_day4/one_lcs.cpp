#include<bits/stdc++.h>
using namespace std;

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
int lcs(string s1,string s2,int n,int m,vector<vector<int> > &dp){
    if(n==0 || m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];

    if(s1[n-1]==s2[m-1]){
        dp[n][m]=1+lcs(s1,s2,n-1,m-1,dp);
    }
    else{
        dp[n][m]=max(lcs(s1,s2,n-1,m,dp),lcs(s1,s2,n,m-1,dp));
    }
    return dp[n][m];
}


void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    vector<vector<int > > dp(n+1,vector<int>(m+1,-1));
    cout<<lcs(s1,s2,n,m,dp);
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