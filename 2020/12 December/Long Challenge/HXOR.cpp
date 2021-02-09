#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll A[n];
        for(ll i=0;i<n;i++)
            cin>>A[i];
        
        bool flag[n-1];
        memset(flag, false, sizeof(flag));

       /*
        for(int j=0;j<x;j++){
            int i=0;
            int ff = 0;
            while(i<n-1){
                ll x = A[i], y = A[i+1];
                ll d = x/2;
                if(d == 0)
                    d = 1;
                d = pow(2, d);
                x = x ^ d;
                y = y ^ d;
                if(x < A[i] || (x == A[i] && y < A[i+1])){
                    // cout<<"Change here: "<<A[i]<<" "<<A[i+1]<<endl;
                    A[i] = x;
                    A[i+1] = y;
                    ff = 1;
                    break;
                }  
                else 
                    i++;
            }
            if(ff == 0){
                // cout<<"Hello\n";
                i = n-2;
                // cout<<"Change here: "<<A[i]<<" "<<A[i+1]<<endl;
                ll x= A[i], y = A[i+1];
                ll d = x/2;
                if(d == 0)
                    d = 1;
                d = pow(2, d);
                A[i] = x ^ d;
                A[i+1] = y ^ d;
                flag[i] = true;
            }
            // cout<<"Here at j = "<<j+1<<endl;
            // for(int i=0;i<n;i++){
            //     cout<<A[i]<<" ";
            // }
            // cout<<endl;    
        }
        */
        for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}