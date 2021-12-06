#include <iostream>
typedef long long ll;
using namespace std;
void element(ll x)
{
    ll  n = 1;
    while(x>n)
    {
        x -= n;
        n++;
    }
    cout<<x;
}
int main()
{
    ll x;
    cin>>x;
    element(x);
    return 0;
}
 
