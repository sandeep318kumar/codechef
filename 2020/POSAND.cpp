#include<bits/stdc++.h>
using namespace std;
#define fo(i, number) for(int i=i;i<int(number);i++)
vector<int>vc;
map<int, deque<int> >mp;
typedef long long int ll;
int main()
{
    /*
    int i = 2;
    while(i <= pow(10, 5)){
        vc.push_back(i);
        i *= 2;
    }
    deque<int> q;
    q.push_back(1);
    mp[1] = q;
    for(int i=2;i<= pow(10, 5);i++){
        if(find(vc.begin(),vc.end(), i) != vc.end()){
            mp[i].push_back(-1);
        } else{
            deque<int> q1;
            int a = i-1;
            int b =  i-2;
            if(find(vc.begin(),vc.end(), a) != vc.end()){
                q1 = mp[b];
                int bc = q1.back();
                int fr = q1.front();
                if( (fr & i) > 0)
                    q1.push_front(i);
                else
                    q1.push_back(i);

                bc = q1.back();
                fr = q1.front();
                if( (fr & a) > 0)
                    q1.push_front(a);
                else
                    q1.push_back(a);
                mp[i] = q1;

            } else{
                q1 = mp[a];
                int bc = q1.back();
                int fr = q1.front();
                if( (fr & i) > 0)
                    q1.push_front(i);
                else
                    q1.push_back(i);
                mp[i] = q1;
            }
        }
    }
    */
    ll testCases;
    cin>>testCases;
    while(testCases--){
        ll number;
        cin>>number;
        if(number == 1){
            cout<<"1\n";
        }
        else if(number == 3){
            cout<<"2 3 1\n";
        }
        // checking for power of 2's lie 2, 4, 8, 16...
        else if( (number & (number-1)) <= 0){
            cout<<"-1\n";
        }
        else{
            // printing for 3
            cout<<"2 3 1 ";
            for(ll i=4;i<=number;i++){
                if( !(i & (i-1)) ){
                    cout<<i+1<<" "<<i<<" ";
                    ++i;
                }
                else
                    cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}
