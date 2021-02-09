#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


ll solve(){
    int n;
    cin>>n;
    vector<vector<int>>lines(n);
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int cc;
        cin>>cc;
        for(int j=0;j<cc;j++){
            int ant;
            cin>>ant;
            lines[i].push_back(ant);
            mp[abs(ant)]++;
        }
    }
    ll ans = 0;
    for(auto ant:mp){
        ans += (ant.second > 1);
    }

    for(auto line:lines){
        vi neg, pos;
        for(auto i:line){
            if(i < 0)
            neg.push_back(i);
            else pos.push_back(i);
        }
        reverse(pos.begin(), pos.end());
        // reverse(neg.begin(), neg.end());

        while(true){
            int closest;
            if(neg.empty() && pos.empty())
                break;
            else if(neg.empty())
                closest = pos.back();
            else if(pos.empty())
                closest = neg.back();
            else closest = (abs(neg.back()) < pos.back()) ? neg.back() : pos.back();

            if(closest < 0){
                if(mp[abs(closest)] > 1)
                    ans += neg.size() - 1;
                else
                    ans += pos.size();
            } else {
                if(mp[abs(closest)] > 1)
                    ans += pos.size() - 1;
                else
                    ans += neg.size();
            }
            
            if(closest < 0)
                neg.pop_back();
            else 
                pos.pop_back();
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}