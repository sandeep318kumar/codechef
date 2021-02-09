#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
       /* int flag = 0;
        int n;
        for(int i=r;i>0;i++){
            int x = i % l;
            int ff = 0;
            for(int j=l+1;j<=r;j++){
                //cout<<"hi  "<<x<<" "<<i%j<<endl;
                if(x < i % j || x == 0){
                    //cout<<"herr";
                    ff = 1;
                    break;
                }
                x = i % j;
            }
            if(ff == 1){
                if( i % l == 0 and i % (l+1) > 0 ){
                    flag = 1;
                    break;
                }
            }
            else{
                n = i;
                break;
            }
        }

        (flag == 1) ? cout<<"-1\n":cout<<n<<endl;
        */
        if(r >= 2 * l){
            cout<<"-1"<<endl;
        }
        else
            {
                cout<<r<<endl;
            }
        }
    return 0;
}
