#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
vector<int> factor(int n)
{
    // cout<<"here";
    vector<int>v;
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0)
        {
            int cc = 0;
            while(n % i == 0){
                cc++;
                n = n/i;
            }
            v.push_back(pow(i, cc));
        }
    }
    if(n != 1)
        v.push_back(n);
    return v;
}
ll sum(vector<int>v)
{
    ll ss = 0;
    for(auto i:v){
        ss += i;
    }
    return ss;
}
ll force(int pos, vector<int>A, vector<int>f){
    if(pos == f.size())
        return sum(A);
    
    ll ans = LONG_MAX;
    for(int i=0;i<A.size();i++)
    {
        A[i] *= f[pos];
        ans = min(ans, force(pos+1, A, f));
        A[i] /= f[pos];
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k, x;
        cin>>k>>x;
        vector<int>v;
        v = factor(x);
        ll ans = 0;
        int len = v.size();
        if(len <= k){
            
            ans = sum(v) + k - len;
        }
        else
        {
            vector<int>A(k, 1);
            ans = force(0, A, v);
        }
        cout<<ans<<endl;
    }
    return 0;
}
