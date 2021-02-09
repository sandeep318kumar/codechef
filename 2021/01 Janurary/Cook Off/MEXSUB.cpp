#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int MEX(vi A){
    int n = A.size();
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(A[i]);
    }

    vector<int>B(st.begin(), st.end());
    for(int i=0;i<B.size();i++){
        int idx = abs(B[i]);
        if(idx < B.size()){
            B[idx] *= -1;
        }
    }

    for(int i=0;i<B.size();i++){
        if(B[i] > 0)
            return i;
    }
    return B.size();
}

void sub(vi A, int start, vvi &contri, vvi &res, int x){
    if(start == A.size()){
        res.push_back(contri);
        return;
    }

    for(int i=start; i<A.size();i++){
        vi B;
        for(int j= start; j<=i;j++){
            B.push_back(A[j]);
        }

        if(MEX(B) == x){
            vi c = contri;
            sub(A, start+1, B, res, x);
            contri = c;
            sub(A, start, contri, res, x);
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vi A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<MEX(A)<<endl;
    int x = MEX(A);
    vvi res;
    vvi contri;
    sub(A, 0, contri, res, x);
    for(auto ss: A){
        for(auto s: ss){
            cout<<s<<" ";
        }
        cout<<endl;
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