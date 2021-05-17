#include<bits/stdc++.h>

using namespace std;

void solve(int n){
    if(n%4==1){
        cout<<"1 1"<<endl;
    }
    else if(n%4==2){
        cout<<"2 "<<n<<" 1"<<endl;
    }

    else if(n%4==3){
        cout<<"0"<<endl; 
    }
    else if(n%4==0){
        cout<<"1 "<<n<<endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}