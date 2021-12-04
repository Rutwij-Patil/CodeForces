#include <iostream>
using namespace std;
int moves(int n, int x)
{
    if(n%x != 0 && x != 1)
        return -1;
    int quot = n/x;
    if(quot == 1)
        return 0;
    if(n%x == 0)
    {
        int ctr = 0;
        while(quot%2 == 0)
        {
            quot /= 2;
            ctr++;
        }
        while(quot%3 == 0)
        {
            quot /= 3;
            ctr++;
        }
        if(quot != 1)
            return -1;
        return ctr;
    }
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<moves(b,a);
    return 0;
}
