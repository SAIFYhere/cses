#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

int main(){
    fastio 
    ll n;
    cin >> n;
    ll ans = 1;
    const ll MOD = 1000000007; 
    for(ll i=1;i<=n;i++){
        ans =(ans * 2) % MOD;
    }
    cout << ans << endl;
    return 0;
}