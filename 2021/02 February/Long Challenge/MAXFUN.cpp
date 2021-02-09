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
    vector<int>A(n);
    int minA = INT_MAX, maxA = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>A[i];
        minA = min(A[i], minA);
        maxA = max(A[i], maxA);
    }
    cout<<2*(abs(maxA - minA))<<endl;;
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