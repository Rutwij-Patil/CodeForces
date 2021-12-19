#include <iostream>
using namespace std;
int main()
{
    int t, cap{0}, mincap{0}, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cap += (b - a);
        if(mincap < cap)
            mincap = cap;
    }
    cout<<mincap;
}
