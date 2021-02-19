#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

vvi outdeg(1e5+1);
int check(int v, int w){
	if(outdeg[v].size() == 0)
		return 0;

	int x = outdeg[v].size();
	if(w%x == 0){
		int res = 0;
		int w1 = w/x;
		for(auto &i: outdeg[v]){
			res += check(i, w1);
		}
		return res;
	} else{
		return w;
	}
}

void solve()
{
	
    int n;
    cin>>n;
    vector<int>A(n-1);
    // vvi outdeg(n+1);
    for(int i=1;i<n;i++){
        cin>>A[i];
        // parent of i+1 is A[i]
        outdeg[A[i]].push_back(i+1);
    }
  
    // for(int i=1;i<=n;i++){
    // 	cout<<i<<"-> ";
    // 	for(auto &j:outdeg[i])
    // 		cout<<j<<" ";
    // 	cout<<endl;
    // }

    int q;
    cin>>q;
    while(q--){
    	int v, w;
    	cin>>v>>w;
    	cout<<check(v, w)<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--){ 
        solve();
        // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    // }
    return 0;
}