#include <iostream>
using namespace std;
int main()
{
    int n,m, ctr{0};
    cin>>n>>m;
    while(n <= m)
    {
        n *= 3;
        m *= 2;
        ctr++;
    }
    cout<<ctr;
}
