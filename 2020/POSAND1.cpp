#include<bits/stdc++.h>
using namespace std;

typedef long int ll;
int main(){
    int ti;
    cin>>ti;
    while(ti--){
        ll n;
        cin>>n;
        if(n == 1)
        {
            cout<<"1"<<endl;
            continue;
        }
        if(n == 3){
            cout<<"1 3 2"<<endl;
            continue;
        }
        if(!(n & (n - 1))){
           // cout<< (n & n-1)<<' ';
            cout<<"-1"<<endl;
            continue;
        }
        int i=4;
        cout<<"2 3 1 ";
        for(;i<=n;i++){
            if(!(i&(i-1))){
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
            else
                cout<<i<<" ";
        }
    }
    return 0;
}
