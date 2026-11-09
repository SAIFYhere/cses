#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;

int main(){
    fastio
    int t;
    cin>>t;
    while(t){
    ll x,y;
    cin>>y>>x;
    ll layerr=max(y,x);   //maxium number is layer number of spiral 
    ll middle= (layerr-1)*(layerr-1)+layerr;   //finding middle element of the layer
    ll ans;                            //or corner element of the layer
                                       //matrix is created by L shapee
    if(layerr%2==0){  //check if layer is even , both have diffrent formula}                            
                    //even go down then left
        if(x==layerr){    
            ans=middle-(layerr-y);     //the number is lower than middle element of the layer
                                //if x is equal to layerr then it is column side
        }
        else{
            ans=middle+(layerr-x);//the number is greater than middle element of the layer
                                    //if x is not equal to layerr then it is row side
        }
    }
    else{ // go right then up
        if(y==layerr){  //if layer is odd , both have diffrent formula
            ans=middle-(layerr-x);  //the number is lower than middle element of the layer
                              //if y is equal to layerr then it is row side
        }
        else{
            ans=middle+(layerr-y);  //the number is greater than middle element of the layer
                                      //if y is not equal to layerr then it is column side
        }
    }
    cout<<ans<<endl;
    t--;
}
 return 0;
}