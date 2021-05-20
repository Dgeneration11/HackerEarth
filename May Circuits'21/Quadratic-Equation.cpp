#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll l,r,c,count=0,a=0;
    int t;
    cin>>t;
    while(t--){
        cin>>l>>r;
        count = 0;
        for(int i=sqrt(l); i<=r/2+1; i++){
            if(i*i >= 1){
                count = count + sqrt(i*i-l) + 1;
                if(i*i>=r){
                    a = sqrt(i*i-r);
                    if(a*a == i*i - r){
                        count = count - a;
                    }
                    else{
                        count = count - a - 1;
                    }
                }
            }
        }
        cout<<count<<endl;
    }    
}
