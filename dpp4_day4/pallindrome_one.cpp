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
bool isPalindrome(str s,int lo,int hi){
    str s1="";
    for(int i=hi;i>=lo;--i){
        s1.pb(s[i]);
    }
    return s==s1;
}
int solve(str s,int i,int j ){
    if(i>=j) return 0;
    if(isPalindrome(s,i,j)==true) return 0;
   
    int ans=INT_MAX;
    for(int k=i;i<=j-1;++i){
        int temp=1+solve(s,i,k)+solve(s,k+1,j);
        ans=min(ans,temp);
    
    }
    return ans;
}
void solve(){
    input(str,s);
    int n=s.size()-1;
    cout<<solve(s,0,n);
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