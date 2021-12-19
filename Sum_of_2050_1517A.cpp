#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll sum(ll n)
{
    ll ans = -1;
    if(n % 2050 == 0)
    {
        ans = 0;
        n /= 2050;
        while(n)
        {
            ans += n%10;
            n /= 10;
        }
    }
    return ans;
}
int main()
{
    ll t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<sum(n)<<endl;
    }
}
