#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        int A[n];
        int risk = 0, notRisk = 0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i] >= 80 or A[i] <= 9)
                risk++;
            else
            {
                notRisk++;
            }
        }
        int res = 0;
        int a = risk % d;
        int b = notRisk % d;
        res += risk/d;
        res += notRisk/d;
        if(a != 0)
            res++;
        if(b != 0)
            res++;
        cout<<res<<endl;
    }
    return 0;
}
