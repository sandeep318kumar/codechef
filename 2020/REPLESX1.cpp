#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, x, p, k;
        cin>>n>>x>>p>>k;
        ll a[n], l1 = 0, l2 = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] <= x)
                l1++;
            if(a[i] >= x)
                l2++;
        }

        sort(a, a + n);
        if(x == a[p-1]){
            cout<<"0"<<endl;
            continue;
        }

      //  cout<<a[0]<<"df";
        if(p == k){
            if(x > a[p-1]){
                cout<<n-p-l2+1<<endl;
            }
            else{
                cout<<p-l1<<endl;
            }
            continue;
        }
        if(p < k){
            if(x > a[p-1]){
                cout<<"-1"<<endl;
            }
            else{
                cout<<p-l1<<endl;
            }
            continue;
        }
        if(x < a[p-1]){
            cout<<"-1"<<endl;
        }
        else{
            cout<<n-p-l2+1<<endl;
        }
    }
    return 0;
}
