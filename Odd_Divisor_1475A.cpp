#include <iostream>
using namespace std;
int odddiv(long long int x)
{
    while(x%2 == 0)
    {
        x = x/2;
    }
    if(x>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
int main()
{
    long long int n,x;
    cin>>n;
    for(long long int i = 0; i < n; i++)
    {
        cin>>x;
        odddiv(x);
    }
    return 0;
}
