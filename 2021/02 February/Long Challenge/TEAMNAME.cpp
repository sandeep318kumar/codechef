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
    unordered_map<string, string>body;
    unordered_map<char, vector<string>>mp;
    unordered_map<string, int>good, bad;
    
    for(int i=0;i<n;i++){
        cin>>A[i];
        mp[A[i][0]].push_back(A[i]);
        good[A[i]]++;
        string last = A[i].substr(1);
        body[last].push_back(A[i][0]);
    }

    int res = 0;
    
    unordered_map<string, string>::iterator it, it1;
    for(it = body.begin();it != body.end();it++){
        for(it1 = body.begin();it1 != body.end();it1++){
            if(it->first != it1->first){
                string a = it->second, b = it1->second;
                good[a]++;
                good[b]++;

                // get unique values
                set<char>xy(a.begin(), a.end());
                for(auto &c: b){
                    if(xy.count(c) == 0){
                        xy.insert(c);
                    }
                }

                int unique_length = xy.size();
                if( ((bad.find(a) != bad.end()) && bad.find(b) != bad.end()) || 1){
                    res += (a.size() - unique_length) * (b.size() - unique_length);
                    bad[a]++;
                    bad[b]++;        
                }
            }
        }
    }

    cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<64*1000<<"\n";
    cout<<pow(2, 16);
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    return 0;
}