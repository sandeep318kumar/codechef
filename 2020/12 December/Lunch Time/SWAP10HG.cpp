#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
void solve(){
    int n;
        cin>>n;
        string s, p;
        cin>>s>>p;
        int one = 0, zero = 0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(s[i] == '1' && p[i] == '0')
                one++;
            else if( s[i] == '0' && p[i] == '1')
                one--;
            if(one < 0){
                cout<<"No";
                return;
            }
        }
       
       if(one > 0)
       cout<<"No";
       else
       {
           cout<<"Yes";
       }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
       cout<<endl;
    }
    return 0;
}
