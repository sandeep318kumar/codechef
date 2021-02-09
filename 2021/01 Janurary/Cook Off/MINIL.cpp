#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int solve(){
    int n, m;
    cin>>n>>m;
    vector<string>A(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        A[i] = s;
    }
    // int m = A[0].size();
    bool turn = true;

    vector<string>left(n, string(m, '.'));
    vector<string>right(n, string(m, '.'));

    for(int i=0;i<n;i++){
        int j = (turn) ? 0 : 1;
        while(j < m){
            left[i][j] = '*';
            j += 2;
        }
        turn = !turn;    
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(left[i][j] == '.')
                right[i][j] = '*';
            else right[i][j] = '.';
        }
    }

    int l = 0, r = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] != left[i][j])
                l++;

            if(A[i][j] != right[i][j])
                r++;
        }
    }
    return min(l, r);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}