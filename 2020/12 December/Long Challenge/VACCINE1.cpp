#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
        // 1 2 1 3 14
        // 3
        // 5 4 
        // 2 10 
        // 100
        // 9
        int d1, v1, d2, v2, p;
        cin>>d1>>v1>>d2>>v2>>p;
        int i = 1;
        int sum = 0;
        while(1){
            if(i >= d1)
                sum += v1;
            if(i >= d2)
                sum += v2;
            if(sum >= p)
                break;
            i++;
        }
        cout<<i<<endl;
    // }
    return 0;
}
