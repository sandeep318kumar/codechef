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
        string str;
        cin>>str;
        int r = 0;
        for(int i=0;i<n;i++){
            int x = str[i] - '0';
            if(x == 1){
                r++;
            }
        }
        double per = 0;
        r += ( 120 - n);
        per = (double) (r/120.0) * 100.0;
        cout<<per<<" ";
        if(per >= 75)
            cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
