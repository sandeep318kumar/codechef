#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n; // declare
    int resA = 0, resB = 0;
    cin>>n; // initialise
    // 1 -> A is leading
    // 2 -> B is leading

    int player = 0, lead = 0;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        resA += a;
        resB += b;
        if(resA > resB){
            if(lead < abs(resA - resB)){
                player = 1;
                lead = abs(resA - resB);
            }
        } else{
           if(lead < abs(resA - resB)){
                player = 2;
                lead = abs(resA - resB);
            }
        }
    }
    cout<<player<<" "<<lead<<endl;
}
int main()
{
    solve();
    return 0;
}