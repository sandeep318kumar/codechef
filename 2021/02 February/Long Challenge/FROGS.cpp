#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void solve(){
    ll n;
    cin>>n;
    vector<ll>A(n), B(n);
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }

    for(ll j=0;j<n;j++){
        cin>>B[j];
    }
    map<ll, ll>location, jump;
    for(ll i=0;i<n;i++){
        location[A[i]] = i+1;
        jump[A[i]] = B[i];
    }
    ll res = 0;
    for(ll i = 2;i<=n;i++){
        if(location[i] <= location[i-1]){
            ll diff = abs(location[i-1] - location[i]);
            ll j = (diff/jump[i]) + 1;
            res += j;
            location[i] += j * jump[i];
        }
    }
    cout<<res<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}