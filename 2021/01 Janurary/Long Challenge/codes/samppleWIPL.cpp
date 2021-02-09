#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }  
        sort(a,a+n,cmp);
        ll sum=0;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(sum<2*k)
            {
                sum=sum+a[i];
                cnt++;
                //break;
            }
            else
           {
                break;
            }   
        }
        if(sum<2*k||n==1)
        {
           cout<<-1<<endl;
        }
        else
        {
            bool subset[cnt+1][2*k + 1];
            for (int i = 0; i <=cnt; i++)
                subset[i][0] = true;
            for (int i = 1; i <= 2*k; i++)
                subset[0][i] = false;
            for (int i = 1; i <= cnt; i++)
            {
                for (int j = 1; j <= 2*k; j++)
                {
                    if (j < a[i - 1])
                        subset[i][j] = subset[i - 1][j];
                    if (j >= a[i - 1])
                        subset[i][j] = subset[i - 1][j] || subset[i - 1][j - a[i - 1]];
                }
            }

            for (int i = 0; i <= cnt; i++)
            {
                for (int j = 0; j <= 2*k; j++)
                {
                    cout<<subset[i][j]<<" ";
                }
                cout<<endl;
            }

            int minCnt=-1;
            for(int i=k;i<=2*k;i++)
            {
                if(subset[cnt][i]==true)
                {
                    int leftover=sum-i;
                    if(leftover>=k)
                    {
                        minCnt=cnt;
                    }
                    else
                    {
                        int j=cnt;
                        for(j=cnt;j<n;j++)
                        {
                            leftover = leftover + a[j];
                            if(leftover>=k)
                            {
                                break;
                            }
                        }
                        if(j!=n){
                            if(minCnt==-1)
                            {
                                minCnt=j+1;
                            }
                            else
                            {
                                minCnt=min(minCnt,j+1);
                            }
                        }
                    }
                        
                }
            }
            
            if(minCnt==-1&&cnt==1)
            {
                int r=0;
                int i;
                for(i=1;i<n;i++)
                {
                    r=r+a[i];
                    if(r>k)
                    {
                        break;
                    }
                }
                if(i!=n)
                {
                    cout<<i+1<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
            else
                cout<<minCnt<<endl;
        }
    }
}