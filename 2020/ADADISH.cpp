#include<bits/stdc++.h>
using namespace std;
vector<int> subset(int A[], int n, int s){
 /*   if(n == 0 )
        return false;
    if(s == 0)
        return true;
    if(A[n-1] <= s)
        return subset(A, n-1, s) || subset(A, n-1, s-A[n-1]);
    else
        return subset(A, n-1, s);
    */
    bool dp[n+1][s+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(j == 0)
                dp[i][j] = true;
            else if(i == 0 )
                dp[i][j] = false;
            else if(A[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j- A[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    vector<int>ss;
    for(int j=0;j<= s/2;j++){
        if(dp[n][j] == 1)
            ss.push_back(j);
    }
    return ss;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        int s = 0;
        for(auto i : A)
            s += i;

        vector<int>ss = subset(A, n, s);
        int mm = INT_MAX;
        int sub = 0;
        for(int i=0;i<ss.size();i++){
            if(s - 2*ss[i] < mm){
                mm = s - 2*ss[i];
                sub = ss[i];
            }
        }
        cout<<max(sub, s -sub)<<endl;
    }
    return 0;
}
