#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

int main(){
    fastio
    int n;
    cin>>n;
    int count=0;
    if(n==2){
        cout<<4;
        return 0;
    }
    count = ((n*n)+1)/2;
    cout<<count<<endl;
    return 0;
    
    }
