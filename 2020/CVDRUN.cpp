#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k, x, y;
        cin>>n>>k>>x>>y;
        int cc[n];
        memset(cc, 0, sizeof(cc));
        int i = x-1;
        while(cc[i] != 1){
            cc[i] = 1;
            i = (i+k)%n;
            if(cc[y-1] == 1)
                break;
        }

        (cc[y-1] == 1) ? cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}
