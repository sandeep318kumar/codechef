#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(){
    ll n, m;
    cin>>n>>m;
    int A[n], B[m], sumA = 0, sumB = 0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        sumA += A[i];
    }

    for(int i=0;i<m;i++){
        cin>>B[i];
        sumB += B[i];
    }

    if(sumA > sumB)
        return 0;
    // else if(sumA == sumB)
    //     return -1;
    else{
        sort(A, A+n);
        sort(B, B+m);
        int steps = 0, i = 0, j = m - 1;
        while(i < n && j >= 0){
            sumA += (B[j] - A[i]);
            sumB += (A[i] - B[j]);
            steps++;
            if(sumA > sumB)
                return steps;

            i++;j--;
        }
        return -1;
    }
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