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
        int A[26];
        memset(A, 0, sizeof(A));
        map<char, int>mp;
        for(int i=0;i<n;i++){
            int in = s[i] - 'a';
            A[in]++;
            mp[s[i]]++;
        }
        queue<char>q1, q2;
        map<char, int>::iterator it;
        for(it = mp.begin();it != mp.end();it++){
            int a = it->second;
            while(a/2 > 0){
                q2.push(it->first);
                a -= 2;
            }
            if(a == 1)
                q1.push(it->first);
        }
        int ans = 0;
        if(q2.size() == 0)
            ans = 0;
        else {
            while(!q2.empty()){
                if(q1.size() == 0){
                    char c = q2.front();
                    q2.pop();
                    q1.push(c);
                    q1.push(c);
                }
                if(!q2.empty() && !q1.empty()){
                    ans++;
                    q2.pop();
                    q1.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
