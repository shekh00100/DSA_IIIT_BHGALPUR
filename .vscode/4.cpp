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


void solve(){
    input_1(int,row,col);
    vector<vector<int>> v;
    fr(i,0,row){
        vector<int> temp;
        fr(i,0,col){
            input(int,x);
            temp.pb(x);
        }
        v.pb(temp);
    }
    int Row=v.size(),Col=v[0].size();
    int ct=0,total_element=Row*Col;
    int start_row=0,ending_row=Row-1;
    int start_col=0,ending_col=col-1;
    while(ct<total_element){
        for(int i=start_col;i<=ending_col;++i){
            cout<<v[start_row][i]<<" ";
            ct++;
        }
        start_row++;
        for(int i=start_row;i<=ending_col;++i){
            cout<<v[i][ending_col]<<" ";
            ct++;
        }
        ending_col--;
        for(int i=ending_col;i>=start_col;--i){
            cout<<v[ending_row][i]<<" ";
            ct++;
        }
        ending_row--;
        for(int i=ending_row;i>=start_row;--i){
            cout<<v[i][start_col]<<" ";
            ct++;
        }
        start_col++;
    }
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