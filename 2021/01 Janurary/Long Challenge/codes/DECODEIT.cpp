#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = n-1;
    string res= "";
    while(i >= 0){
        int j = 0;
        int cc = 0;
        while(j < 4){
            cc += (s[i] - '0') * pow(2, j);
            i--;
            j++;
        }
        res += (char)(cc + 'a');
        // i -= 4;
    }
    i = 0;
    int j = res.size()-1;
    while(i <= j){
        swap(res[i], res[j]);
        i++;
        j--;
    }
    cout<<res<<endl;
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