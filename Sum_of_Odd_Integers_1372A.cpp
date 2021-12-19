#include <iostream>
using namespace std;
void sod(int n, int k)
{
    if(k%2 == n%2)
    {
        if(k * k > n)
            cout<<("No")<<endl;
        else
            cout<<("Yes")<<endl;
    }
    else
        cout<<("No")<<endl;
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sod(a,b);
    }
    return 0;
}
