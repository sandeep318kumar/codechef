#include<bits/stdc++.h>
#include<string>
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
        string s;
        cin>>s;
        s = s.substr(0, n);
        //cout<<s<<endl;
        /*
        for(int i=n/2;i<n-1;i++)
        {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i);
           // cout<<s1<<" "<<s2<<endl;
           int ff = s1.find(s2);
           if(ff != string::npos){
                flag = 1;
                break;
           }
        }
        */
        string s1 = s.substr(0, n-1);
        string s2 = s.substr(n-1);
      //  cout<<s1<<" "<<s2<<endl;
        int ff = s1.find(s2);
           if(ff != string::npos){
                cout<<"YES\n";
           } else
            cout<<"NO\n";
    }
    return 0;
}
