#include <iostream>
using namespace std;
void guessers(int a, int b)
{
    if(a==1&&b==1)
    {
        cout<<0<<endl;
    }
    else if(a==1||b==1)
    {
        cout<<1<<endl;
    }
    else
        cout<<2<<endl;
}
int main()
{
    int t, m, n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        guessers(n,m);
    }
}
