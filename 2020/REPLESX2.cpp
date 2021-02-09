#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, x, p, k;
        cin>>n>>x>>p>>k;
        ll A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A, A+n);
        if(A[p-1] == x){
            cout<<"0"<<endl;
            continue;
        }

        if( p == k){
            if( A[p-1] < x){
                int l = 0;
                for(int i=p-1;i<n && A[i] < x;i++)
                    l++;
                cout<<l<<endl;
            }
            else{
                int l = 0;
                for(int i=p-1;i>=0 && A[i] > x;i--)
                    l++;
                cout<<l<<endl;
            }
        }
        else if(p > k){
            if(A[p-1] > x)
                cout<<"-1"<<endl;
            else{
                int l = 0;
                for(int i=p-1;i<n && A[i] < x;i++)
                    l++;
                cout<<l<<endl;
            }
        }
        else{
            if(A[p-1] < x)
                cout<<"-1"<<endl;
            else{
                int l = 0;
                for(int i=p-1;i>=0 && A[i] > x;i--)
                    l++;
                cout<<l<<endl;
            }
        }
    }
    return 0;
}
