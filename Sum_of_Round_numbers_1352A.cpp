#include <iostream>
#include <vector>
using namespace std;
void sor(int n)
{
    vector <int> vec;
    int exp = 1;
    while(n)
    {
        if(n%10*exp)
            vec.push_back((n%10)*exp);
        n /= 10;
        exp *= 10;
    }
    cout<<vec.size()<<endl;
    for(int i: vec)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sor(n);
    }
    return 0;
}
