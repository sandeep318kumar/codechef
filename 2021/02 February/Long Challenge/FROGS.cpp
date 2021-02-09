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
    int n;
    cin>>n;
    vector<int>A(n), B(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(int j=0;j<n;j++){
        cin>>B[j];
    }
    map<int, int>location, jump;
    for(int i=0;i<n;i++){
        location[A[i]] = i;
        jump[A[i]] = B[i];
    }
    int res = 0;
    for(int i = 2;i<=n;i++){
        if(location[i] < location[i-1]){
            int diff = abs(location[i-1] - location[i]);
            int j = (diff/jump[i]) + 1;
            res += j;
            location[i] += j * jump[i];
        }
    }
    cout<<res<<endl;
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