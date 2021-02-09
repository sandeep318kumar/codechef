#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n-1];
        int B[n-1];
        vector<vector<int> >G(n+1);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                G[i][j] = 0;

        for(int i=0;i<n-;i++){
            int x, y;
            cin>>x>>y;

            G[x][y] = 1;
            G[y][x] = 1;
        }





    }

    return 0;
}
