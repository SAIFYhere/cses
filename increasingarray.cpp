#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

int main(){
    int n;
    ll count = 0;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    for(int i=1;i<n;i++){
        while(array[i]<array[i-1]){
            count+=(array[i-1]-array[i]);
            array[i] = array[i-1];
            // array[i]++;
            // count++;
        }
    }
    cout << count << endl;
    return 0;
}