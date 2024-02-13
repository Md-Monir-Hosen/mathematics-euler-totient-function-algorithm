#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=100001;
vector<ll>p;
void sieve()
{
    ll isprime[MAX+1];
    for(ll i=2;i<=MAX;i++)
    {
        if(isprime[i]==0)
        {
            p.push_back(i);
            for(ll j=2;i*j<=MAX;j++)
            {
               isprime[i*j]=1;
            }
        }
    }
}
ll phi(ll n)
{
    ll res=n;
    for(ll i=0;p[i]*p[i]<=n;i++)
    {
        if(n%p[i]==0)
        {
            res-=(res/p[i]);
            while(n%p[i]==0)
            {
                n/=p[i];
            }
        }
    }
    if(n>1)
    {
        res-= res/n;
    }
    return res;
}
int main()
{
     sieve();
    cout << phi(11) << "\n";
    cout << phi(21) << "\n";
    cout << phi(31) << "\n";
    cout << phi(41) << "\n";
    cout << phi(51) << "\n";
    cout << phi(61) << "\n";
    cout << phi(91) << "\n";
    cout << phi(101) << "\n";
    return 0;
}
