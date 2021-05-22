//This code had failed in some cases. So I tried in Python thinking maybe because of some big int
// The python code is same as this, but it's working.XD

#include<bits/stdc++.h>
#include<map>
#define ll long long
using namespace std;

bool checktype(double x){
    if(x==int(x)){
        return true;
    }
    return false;
}

ll calc1(ll a, ll d, ll x){
    double n = (x-a)/d + 1;
    if(checktype(n)){
        return (int)(n);
    }
    else{
        return (int)(n+1);
    }
}
 
ll calc2(ll a, ll d, ll x){
    double n = (x-a)/d +1;
    return (int)(n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        // cout<<L<<" "<<R<<endl;
        ll count = 0;
        for(int i=1; i<sqrt(R)+1; i++){
            ll a = i*i;
            ll p1 = 0;
            ll p2 = 0;
            if(L>=a){
                p1 = calc1(a, 2*i, L);
            }
            if(R>=a){
                p2 = calc2(a, 2*i, R);
            }
            else{
                break;
            }
            count = count + (p2-p1);
            if(p1 != 0){
                count = count + 1;
            }
        }
        cout<<count<<endl;
    }
}


