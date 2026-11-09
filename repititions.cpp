#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;

int main(){
fastio

string s;
cin >> s;
int maxx=1;
int count=0;
for(int i=1; i<s.size(); i++){
    if(s[i]==s[i-1]){
        count++;
    }
    else{
        maxx=max(maxx, count+1);
        count=0;
    }
    }
    cout<<max(maxx, count+1);
    return 0;

}