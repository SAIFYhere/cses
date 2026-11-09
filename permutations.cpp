#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

int main(){
    fastio
    int n;
    cin >> n;
    if(n < 4 && n > 1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    int array[n];
    for(int i = 0; i < n; i++){
        array[i] = i+1;
    }
    for(int i = 1; i < n; i+=2){
        cout << array[i] << " ";
}
    for(int i = 0; i < n; i+=2){
        cout << array[i] << " ";
    }
    return 0;
}