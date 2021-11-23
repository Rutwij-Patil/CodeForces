#include <iostream>
using namespace std;
int per{0}, x;
void perimeter(int n)
{
    per = 4*n;
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            x = n/i;
            if(2*(i+x)<per)
            {
                per = 2*(i+x);
            }
        }
    }
    cout<<per;
}
int main()
{
    int n;
    cin>>n;
    perimeter(n);
    return 0;
}
