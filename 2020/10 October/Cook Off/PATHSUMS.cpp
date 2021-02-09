#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int>G[N];
int D[N];

void dfs(int u, int p)
{
	D[u] = ( D[p] & 1) ? 2: 1;
	for(auto v:G[u]){
        if(v != p)
            dfs(v, u);
	}
}
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    //memset(D, 0, sizeof(D));
    D[0] = 1;
    //int p = 0;
    dfs(1, 0);
    for(int i=1;i<=n;i++){
        cout<<D[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
        G[i].clear();
    }
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
