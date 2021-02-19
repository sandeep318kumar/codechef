#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const ll N = 1e6 + 4;
ll ans[N];

void precompute(){
        
    vector<bool>prime(N, true);
    prime[0] = false;
    prime[1] = false;
    for (ll p=2; p*p<=N; p++) 
    {  
        if (prime[p] == true) 
        {  
            for (ll i=p*p; i<=N; i += p) 
                prime[i] = false; 
        } 
    } 

    ans[0] = 0;
    ans[1] = 0;
    for(ll i=2;i<=N;i++){
        if(prime[i])    ans[i] = ans[i-1] + 1;
        else            ans[i] = ans[i-1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precompute();

    ll t;
    cin>>t;

    while(t--){
        // solve();
        ll x, y;
        cin>>x>>y;

        if(ans[x] > y)
            cout<<"Divyam\n";
        else cout<<"Chef\n";
        // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    }
    // for (int i = 0; i < N; ++i)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}