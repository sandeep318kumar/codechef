#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int one = 0, zero = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '0')
                zero++;
            else   one++;
        }
        if( n%2 != 0 or one == n or zero == n)
            cout<<"-1\n";
        else
        {
            cout<<abs(one - zero)/2<<endl;
        }
        
    }
    return 0;
}
