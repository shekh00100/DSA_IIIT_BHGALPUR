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

void reverse(vector<int> &v,int start,int end){
    while(start<end){
        swap(v[start],v[end]);
        start++,end--;
    }
}

void solve(){
    input(int,n);
    vec(int,v);
    fr(i,0,n){
        input(int,s);
        v.pb(s);
    }
    input(int,d);
    reverse(v,0,d-1);
    reverse(v,d,n-1);
    reverse(v,0,n-1);
    output(v);
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