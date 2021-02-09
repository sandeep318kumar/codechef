#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pp;

pp solve(){
    ll n, k, x, y;
    cin>>n>>k>>x>>y;

    pp p1;
    vector<pp>v;
    if(x == y){
        // means that It will go intp [n, n] corner
        p1.first = n;
        p1.second = n;
    } else if(x > y){
// going up right
        v.push_back({x + n - y, n});
        //going up left
        v.push_back({n, x + n - y});
        // going  down left
        v.push_back({y - x, 0});
        // going down right
        v.push_back({0, y - x});

        p1 = v[(k - 1)%4];
    } else{
        // going up right
        v.push_back({n, n - x + y});
        //going up left
        v.push_back({n - x + y, n});
        // going  down left
        v.push_back({0, x - y});
        // going down right
        v.push_back({x - y, 0});

        p1 = v[(k - 1)%4];
    }
    return p1;

    // pp p2 = p1, up_right = p1, up_left = p1, down_right = p1, down_left = p1;

    // // for up right
    // // +1 +1
    // while(p1.first < n && p1.second < n){
    //     p1.first++;
    //     p1.second++;
    //     up_right = p1;
    // }

    // // for up left
    // // +1 -1
    // p1 = p2;
    // while(p1.first < n && p1.second > 0){
    //     p1.first++;
    //     p1.second--;
    //     up_left = p1;
    // }

    // // for down left
    // // -1 -1
    // p1 = p2;
    // while(p1.first > 0 && p1.second > 0){
    //     p1.first--;
    //     p1.second--;
    //     down_left = p1;
    // }

    // // for down right
    // // -1 +1
    // p1 = p2;
    // while(p1.first > 0 && p1.second < n){
    //     p1.first--;
    //     p1.second++;
    //     down_right = p1;
    // }
        
    // if(up_right.first == n && up_right.second == n)
    //     return up_right;
        
    // if(down_right.first == 0 && down_right.second == 0)
    //     return down_right;

    // if(up_left.first == 0 && up_left.second == n)
    //     return up_left;
        
    // if(down_left.first == n && down_left.second == 0)
    //     return down_left;

    // p1 = up_right;
    // int dir = 1;
    // for(int i=0;i<(k-1)%4;i++){
    //     if(dir == 1){
    //         // moving up left
    //         p2 = p1;
    //         p1.first = p2.second;
    //         p1.second = p2.first;
    //         dir = 2;
    //     } else if(dir == 2){
    //         // moving down left
    //         p1.second = p1.second - p1.first;
    //         p1.first = 0;
    //         dir = 3;
    //     } else if( dir == 3){
    //         // moving down right
    //         p2 = p1;
    //         p1.first = p2.second;
    //         p1.second = p2.first;
    //         dir = 4;
    //     } else{
    //         // moving up right
    //         int diff = n - p1.first;
    //         p1.first = n;
    //         p1.second = diff;
    //         dir = 1;
    //     }
    // }
    // return p1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        pp p1 = solve();
        cout<<p1.first<<" "<<p1.second<<endl;
    }
    return 0;
}