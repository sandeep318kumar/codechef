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
    int ev = 0, od = 0;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i] % 2 == 0)
            ev++;
        else
            od++;
    }
    cout<<min(n - ev, n - od)<<endl;

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