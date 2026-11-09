#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

void solve(int n){


    
    // if(n==1){
    //     cout<<0<<" ";
    //     return;
    // }
    // if(n==2){
    //     cout<<6<<" ";
    //     return;
    // }
    // int count=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         if(j==i+5 || j==i+7) continue;
    //         else count++;
    //     }
    // }
    // cout<<count<<" ";
}

    int main(){
    fastio
    ll n;
    cin>>n;
    // int g=1;
    // while(g!=n+1){
    //     int x=g*g;
    //     solve(x);
    //     g++;
    // }
    for(ll i=1;i<=n;i++){
        ll total=((i*i)*(i*i-1))/2;
        ll attack=4*(i-1)*(i-2);
        cout<<total-attack<<" ";
    }
    return 0;
}