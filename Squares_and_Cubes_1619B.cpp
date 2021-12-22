#include <iostream>
#include <cmath>
#include <vector>
typedef long long int ll;
using namespace std;
ll soc(ll n)
{
    vector<ll>vec;
    ll r = sqrt(n) + 1;
    for(ll i = 1; i<=r; i++)
    {
        if (i*i <= n)
            vec.push_back(i*i);
        if(i*i*i <= n)
            vec.push_back(i*i*i);
    }
    sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec.size();
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<soc(n)<<endl;
    }
    return 0;
}
