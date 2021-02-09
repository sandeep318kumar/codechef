#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int A[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            sum += A[i];
        }
        if(sum%k == 0){
            cout<<"0\n";
        }
        else{
            cout<<"1\n";
        }

    }
    return 0;
}
