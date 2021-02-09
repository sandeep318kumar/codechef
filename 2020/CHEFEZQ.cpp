#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll A[n];
        for(ll i=0;i<n;i++)
            cin>>A[i];
        ll x = 0;
        int flag = 0;
        ll day = 0;
        for(ll i=0;i<n;i++){
            ll s = A[i] + x;
            if(s >= k){
                x = s - k;
            } else{
                x = 0;
                flag = 1;
                day = i+1;
                break;
            }
        }
        if(flag == 1) cout<<day<<endl;
        else
        {
         //   cout<<x<<endl;
            ll i = n + 1;
            i += x/k;
           // i++;
            cout<<i<<endl;
        }
    }

    return 0;
}
