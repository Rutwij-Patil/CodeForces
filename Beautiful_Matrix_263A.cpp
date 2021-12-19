#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < 6; j++)
        {
            cin>>a;
            if(a == 1)
            {
                cout<<(abs(i-3) + abs(j-3));
                return 0;
            }
        }
        
    }
    return 0;
}
