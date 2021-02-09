#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k, d;
    cin>>n>>k>>d;
    vector<ll>A(n, 0);
    ll sum = 0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        A[i] = x;
        sum += x;
    }

    cout<<min(sum/k, d)<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}