#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = 1e6 + 5;
int ans[N];
vector<bool> prime(N, true);

void precompute(){

    // memset(prime, true, sizeof(prime));
    // for(int i=0;i<N;i++){
    //     prime[i] = true;
    // }

    prime[0] = false;
    prime[1] = false;
    for(int i = 2;i*i < N;i++){
        if(prime[i] == true){
            for(int j = i*i;j<N;j+=i){
                prime[j] = false;
            }
        }
    }

    ans[0] = 0;
    ans[1] = 0;
    for(int i=2;i<N;i++){
        if(prime[i] && prime[i-2]){
            ans[i] = ans[i-1] + 1;
        } 
        else  ans[i] = ans[i-1];
    }
}

int main()
{
    precompute();
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}