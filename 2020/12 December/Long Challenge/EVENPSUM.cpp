#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
// find the number of positive integers (x, y) such that 1 <=x<=A, 1<=y<=B and x+y is even.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        // 4
        // 1 1 
        // 2 3
        // 4 6
        // 8 9
        // ----
        // 1
        // 3
        // 12
        // 36
        int res = 0;
        res += ((a+1)/2) * ((b+1)/2) + (a/2) * (b/2);
        // for(int i=1;i<=a;i++){
        //     for(int j=1;j<=b;j++){
        //         if((i+j) % 2 == 0){
        //             res++;
        //         }
        //     }
        // }
        cout<<res<<endl;
    }
    return 0;
}
