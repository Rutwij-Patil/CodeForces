#include <iostream>
using namespace std;
int main()
{
    int w,n,k,cost{0};
    cin>>k>>n>>w;
    for(int i = 1; i<=w; i++)
    {
        cost += i*k;
    }
    if((cost - n)>0)
        cout<<cost - n;
    else
        cout<<0;
}
