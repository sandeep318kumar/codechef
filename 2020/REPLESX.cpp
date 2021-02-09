#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fo(i, n) for(int i=i;i<int(n);i++)
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n, x, p, k;
        cin>>n>>x>>p>>k;
        ll A[n];
        for(ll i=0;i<n;i++)
            cin>>A[i];

        sort(A, A + n);
        int cc = 0;
        while(1){

            if(A[p-1] == x){
                cout<<cc<<endl;
                break;
            } else if( p < k && A[p-1] < x){
                cout<<"-1"<<endl;
                break;
            } else{
                cc++;
                A[k-1] = x;
                sort(A, A + n);
            }
        }
    }
    return 0;
}
