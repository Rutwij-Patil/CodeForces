#include <iostream>
using namespace std;
typedef long long ll;
ll jumps(ll x, ll n)
{
    if(n % 4 == 0)
    {
        return x;
    }
    ll k = n % 4;
    ll d = (n / 4) * 4;
    for(ll i = 1; i < k + 1; i++)
    {
        if (x%2)
            x += d + i;
        else
            x -= d + i;
    }
    return x;
}
int main()
{
    ll t = 1;
    cin >> t;
    while(t--)
    {
        ll x, n;
        cin >> x >> n;
        cout<<jumps(x,n)<<endl;;
    }
    return 0;
}
