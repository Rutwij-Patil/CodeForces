#include <iostream>
using namespace std;
void pairwisemaxs(int x, int y, int z)
{
    if(x > y)swap(x,y);
    if(x > z)swap(x,z);
    if(y > z)swap(y,z);
    if(y == z)
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<x<<" "<<z<<endl;
    }
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t, x, y, z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        pairwisemaxs(x,y,z);
    }
}
