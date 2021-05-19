#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll l,r,b,c,count=0,a=0;
    int t;
    cin>>t;
    while(t--){
        cin>>l>>r;

        for(int i=sqrt(l); i<=r/2; b++){
            if(i*i >= 1){
                count = count + sqrt(i*i-1) + 1;
                if(i*i>=r){
                    a = sqrt(b*b-r);
                    if(a*a == b*b - r){
                        count = count - a;
                    }
                    else{
                        count = count-a-1;
                    }
                }
            }
        }
        cout<<count;
    }    
}
