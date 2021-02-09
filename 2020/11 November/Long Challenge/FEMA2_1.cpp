#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct walls{
    int pos1;
    int pos2;
};

ll solve(ll n, ll k, string s){
    ll answer = 0;
    ll sheets[s.length()];
    memset(sheets, 0, sizeof(sheets));

    vector<pair<ll, ll> > vec;
    ll wallsPosition = 0;

    for(ll i = 0;i < s.length();i++)
    {
        if(s[i] == 'X')
        {
            vec.push_back({wallsPosition, i});
            wallsPosition = i;
        }

        if(s[i] == ':'){
            if(i !=  0)
                sheets[i] = sheets[i-1] + 1;
            else
                sheets[i] = 1;
        }
        else if(i != 0)
            sheets[i] = sheets[i-1];
    }
    vec.push_back({wallsPosition, n-1});

    for(ll l = 0;l < vec.size();l++)
    {
        ll initialWall = vec[l].first;
        ll finalWall = vec[l].second;
        queue<ll> magnets;
        queue<ll> iron;

        int i = initialWall;
        while(i <= finalWall)
        {
            if(s[i] == 'M')
                magnets.push(i);

            if(s[i] == 'I')
                iron.push(i);
            i++;
        }

        ll count = 0;
        ll maxCount = iron.size();

        while(magnets.size() != 0 && iron.size() != 0)
        {
            ll magnetPosition = magnets.front();
            ll ironPosition = iron.front();

            ll reqVal = k + 1 - abs(magnetPosition - ironPosition) - abs(sheets[magnetPosition] - sheets[ironPosition]);
            count++;
            if(reqVal <= 0)
            {
                if(count == maxCount)
                {
                    magnets.pop();
                    count = 0;
                }
                iron.pop();
                iron.push(ironPosition);
            }
            else
            {
                answer++;
                iron.pop();
                magnets.pop();
                maxCount--;
                count = 0;
            }
        }
    }
    return answer;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, k;
	    cin>>n>>k;
        string s;
        cin>>s;
        cout<<solve(n, k, s)<<endl;
	}
	return 0;
}
