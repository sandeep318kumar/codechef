#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(int i=i;i<int(n);i++)
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int n = a.length();
        vector<int>pos;
        for(int i=0;i<a.length();i++){
            if(a[i] != b[i])
                pos.push_back(i);
        }
        if(pos.size() == 0)
            cout<<"0\n";
        else
        {
            vector<char>odd1, even1, odd2, even2;
            for(int i=0;i<n;i++){
                if(i%2 == 0){
                    even1.push_back(a[i]);
                    even2.push_back(b[i]);
                }
                else{
                    odd1.push_back(a[i]);
                    odd2.push_back(b[i]);
                }

            }
            int odd = odd1.size();
            int even = even1.size();

            int A1[odd];
            int flag;
            if(odd2[0] == odd1[0]){
                A1[0] = 0;
                flag = 0;
            }
            else {
                A1[0] = 1;
                flag = 1;
            }
            for(int i=1;i<odd;i++){
                if(odd1[i] == odd2[i]){
                    A1[i] = A1[i-1];
                    flag = 0;
                }
                else{
                    if(flag == 1)
                        A1[i] = A1[i-1];
                    else
                        A1[i] = 1 + A1[i-1];
                    flag = 1;
                }
            }


            int A2[even];
            if(even1[0] == even2[0]){
                A2[0] = 0;
                flag = 0;
            }
            else {
                A2[0] = 1;
                flag = 1;
            }
            for(int i=1;i<even;i++){
                if(even1[i] == even2[i]){
                    A2[i] = A2[i-1];
                    flag = 0;
                }
                else{
                    if(flag == 1)
                        A2[i] = A2[i-1];
                    else
                        A2[i] = 1 + A2[i-1];
                    flag = 1;
                }
            }
            //cout<<A1[odd-1]<<" "<<A2[even-1]<<" ";
            cout<<A1[odd-1] + A2[even-1]<<endl;
        }
    }

    return 0;
}
