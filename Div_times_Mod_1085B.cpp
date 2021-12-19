#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k, t, temp{0}, min;
    cin>>n>>k;
    min = 9223372036854775807;
    for(t = 1; t<k; t++)
    {
        if(n%t == 0)
            temp = k*(n/t)+t;
        if(temp < min)
            min = temp;
    }
    cout<<min;
}
