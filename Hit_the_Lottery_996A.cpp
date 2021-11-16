#include <iostream>
using namespace std;
int main()
{
    int n{};
    cin>>n;
    int denom{0};
    if(n>=100)
    {
        denom += n/100;
        n = n%100;
    }
    if(n>=20)
    {
        denom += n/20;
        n = n%20;
    }
    if(n>=10)
    {
        denom += n/10;
        n = n%10;
    }
    if(n>=5)
    {
        denom += n/5;
        n = n%5;
    }
    if(n>=1)
    {
        denom += n/1;
    }
    cout<<denom;
    return 0;
}
