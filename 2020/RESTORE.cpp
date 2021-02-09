#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int B[n+1];
        B[0] = -1;
        for(int i=1;i<=n;i++)
            cin>>B[i];
        int A[n+1];
        A[0] = -1;
        int x = 4 * pow(10, 6);
        for(int i=n;i>0;i--){
            if( i == B[i]){
                A[i] = x;
                x--;
            }
            else
                A[i] = A[B[i]];
        }
        for(int i=1;i<=n;i++)
            cout<<A[i]<<" ";
        cout<<endl;
    }
    return 0;
}
