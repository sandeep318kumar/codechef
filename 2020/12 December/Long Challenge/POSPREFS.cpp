#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
void print(vector<int>A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            A[i] = i+1;
        }
        if(n%2 == 0){
            int i=0;
            while(i<n){
                A[i] = -A[i];
                i+=2;
            }
        }else{
            int i=1;
            while(i<n){
                A[i] = -A[i];
                i+=2;
            }
        }

        vector<int>sum(n);
        sum[0] = A[0];
        int cc = ( A[0] > 0 ) ? 1 : 0;
        for(int i=1;i<n;i++){
            sum[i] = A[i] + sum[i-1];
            if(sum[i] > 0)
                cc++;
        }
        // print(A);
        if(cc > k){
            int i=n-1;
            while(i >= 0){
                if(A[i] > 0){
                    A[i] = - A[i];
                    cc--;
                    
                }
                if(cc == k)
                    break;
                i--;
            }
        } else if( cc < k){
            int i=n-1;
            while(i >= 0){
                if(A[i] < 0){
                    A[i] = - A[i];
                    cc++;
                }
                if(cc == k)
                    break;
                i--;
            }
        }
        print(A);
    }
    return 0;
}
