#include <iostream>
using namespace std;
typedef long long ll;
void hbp(ll n)
{
    if(n < 10)
        cout<<n<<endl;
    else if(n < 100)
        cout<<(n/11)+9<<endl;
    else
    {
        ll ctr{0};
        for(ll i = 1; i <= 9; i++)
        {
            ll k = 0;
            for(ll j = 1; j <= 9; j++)
            {
                k = k*10 + i;
                if(k <= n)
                    ctr++;
            }
        }
        cout<<ctr<<endl;
    }
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        hbp(n);
    }
    return 0;
}
