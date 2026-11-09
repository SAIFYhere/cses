#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

int main(){
    fastio
    int n;
    cin >> n;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int miss=n;
  
    for(int i=0;i<n-1;i++){
        if(v[i]!=i+1){
            miss=i+1;
            break;
        }
    }


    // for(int i=1;i<=n;i++){
    //     if(find(v.begin(),v.end(),i)==v.end()){
    //         miss=i;
    //         break;
    //     }
    // }
    cout << miss;
    return 0;

}