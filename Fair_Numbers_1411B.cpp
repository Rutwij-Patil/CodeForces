#include <iostream>
typedef long long ll;
using namespace std;
ll fair(ll n)
{
    ll a, x = n;
    while(x>0)
    {
        a = x%10;
        x /= 10;
        if(a > 0 && n%a != 0)
        {
            n++;
            x = n;
        }
    }
    return n;
}
int main()
{
    ll n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fair(n)<<endl;
    }
}
