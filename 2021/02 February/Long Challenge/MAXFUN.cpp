#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


ll solve(){
    int n;
    cin>>n;
    vector<ll>A(n);
    int minA = INT_MAX, maxA = INT_MIN;
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }

    sort(A.begin(), A.end());

    return max( (abs(A[0] - A[1]) + abs(A[0] - A[n-1]) + abs(A[1] - A[n-1]) ), 
        ( abs(A[0] - A[n-1]) + abs(A[0] - A[n-2])  + abs(A[n-1] - A[n-2]))  );
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}