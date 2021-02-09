#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x, y, k, n;
        cin>>x>>y>>k>>n;

        if(abs(x-y)% ( 2*k) == 0)
            // if((abs(x-y)/k ) %2 == 0)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
         
    }
    return 0;
}
