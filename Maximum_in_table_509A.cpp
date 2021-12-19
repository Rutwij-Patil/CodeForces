#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
ll maxintable(ll n)
{
    ll arr[n][n];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0 ; j < n; j++)
        {
            if( i == 0)
                arr[i][j] = 1;
            else if(j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    return arr[n-1][n-1];
}
int main()
{
    ll n;
    cin>>n;
    cout<<maxintable(n);
    return 0;
}
