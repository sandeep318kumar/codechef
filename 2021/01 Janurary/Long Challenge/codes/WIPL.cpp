#include<bits/stdc++.h>   
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll subset(vi A, ll s){
    ll n = A.size();
    vvi dp(n+1, vi(s+1));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=s;j++){
            if(j == 0)
                dp[i][j] = 1;
            else if(i == 0)
                dp[i][j] = 0;
            else if(A[i-1] <= j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j- A[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][s];
}
ll solve(){
    ll n, k, sum = 0;
    cin>>n>>k;
    vi A(n), prefix(n);

    for(ll i=0;i<n;i++){
        cin>>A[i];
    }

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    for(ll i=0;i<n;i++){
        sum += A[i];
        prefix[i] = sum;
    }

    if(n == 1 || prefix[n-1] < 2*k)
        return -1;
    else if(prefix[n-1] == 2*k){
        // cout<<"Equal\n";
        if(subset(A, k) == 2)
            return n;
        else 
            return -1;
    } 
    else if(A[0] >= k){
        // cout<<"first\n";
        ll cc = 1, temp = 0;
        for(ll i=1;i<n;i++){
            cc++;
            temp += A[i];
            if(temp >= k)
                return cc;
        }
        return -1;
    } 
    else{
        // cout<<"last\n";
        ll cc = 0, sum = 0;
        deque<ll>Q;
        for(auto x: A){
            Q.push_back(x);
        }
        while(Q.size() > 1){
            if(cc == 2)
                break;
            ll x = Q.front(), y = Q.back();
            if(sum + y >= k){
                Q.pop_back();
                cc++;
                sum = 0;
            } else if(sum + x >= k){
                Q.pop_front();
                cc++;
                sum = 0;
            } else if(sum + x + y >= k){
                Q.pop_front();
                Q.pop_back();
                cc++;
                sum = 0;
            } else{
                sum += x;
                Q.pop_front();
            }
        }
        if(cc == 2){
            return n - Q.size();
        }
        else
        {
            if(cc = 1 && sum + Q.front() >= k)
                return n;
            return -1;
        }
        
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}