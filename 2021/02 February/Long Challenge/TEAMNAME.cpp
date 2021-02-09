#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


void solve(){
    int n;
    cin>>n;
    vector<string>A(n);
    set<string>good, bad;
    map<char, vector<string>>mp;
    for(int i=0;i<n;i++){
        cin>>A[i];
        mp[A[i][0]].push_back(A[i]);
        good.insert(A[i]);
    }

    int res = 0;
    for(int i=0;i<mp.size() - 1;i++){
        vector<string> vs = mp[i];
        for(int j=i+1;j<mp.size();j++){
            vector<string> other = mp[j];
            for(auto s1:vs){
                for(auto s2: other){
                    string t1 = s1, t2 = s2;
                    char first = s1[0];
                    t1[0] = t2[0];
                    t2[0] = first;
                    if(good.count(t1) == 0 && good.count(t2) == 0){
                        if(bad.count(t1) ==0 && bad.count(t2) == 0){
                            res++;
                            bad.insert(t1);
                            bad.insert(t2);
                        }
                    }

                }
            }
        }
    }
    cout<<2*res<<endl;
    // for(auto ss:mp){
    //     cout<<ss.first<<" -> ";
    //     for(auto i:ss.second){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}