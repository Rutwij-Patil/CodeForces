#include <iostream>
using namespace std;
int main()
{
    int t,l1,l2,r1,r2;
    cin>>t;
    while(t--)
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2 && r1==r2)
            cout<<l1<<" "<<r2<<endl;
        else if( r1!=r2)
            cout<<r1<<" "<<r2<<endl;
        else if( l1!=l2)
            cout<<l1<<" "<<l2<<endl;
    }
}
