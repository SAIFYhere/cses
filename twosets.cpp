#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

int main(){
    fastio
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=1;i<=n;i++){
        sum+=i;
}
if(sum%2!=0){
    cout<<"NO"<<endl;
    return 0;
}
vector<ll> a;
vector<ll> b;
sum/=2;
ll current =0;
for(ll i=n;i>=1;i--){
    // if(i==n){
    //     a.push_back(i);
    //     current+=i;
    //     continue;
    // }
    if(current+i<=sum){
        a.push_back(i);
        current+=i;
    }
    // if(reduce(a.begin(),a.end())+i<=sum){
    //     a.push_back(i);
    // }
    else{
        b.push_back(i);
    }
}
cout<<"YES"<<endl;
cout<<a.size()<<endl;
while(!a.empty()){
    cout<<a.back()<<" ";
    a.pop_back();
}
cout<<endl;
cout<<b.size()<<endl;
while(!b.empty()){
    cout<<b.back()<<" ";
    b.pop_back();
}

// cout<<sum<<endl;
return 0;
}