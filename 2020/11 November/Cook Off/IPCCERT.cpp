#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int n, k, m;
    cin>>n>>m>>k;
    int A[n][k];
    int Q[n];
    int S[n];
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<k;j++){
            cin>>A[i][j];
            sum += A[i][j];
        }
        S[i] = sum;
        cin>>Q[i];
    }
    int cc = 0;
    for(int i=0;i<n;i++)
    {
        if(S[i] >= m && Q[i] <= 10)
            cc++;
    }
    cout<<cc<<endl;
    return 0;
}
