#include <iostream>
using namespace std;
bool lucky(int n)
{
    while(n>0)
    {
        if(n%10 == 4|| n%10 == 7)
        {
            n /= 10;
            continue;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(n%4 == 0||n%7 == 0)
    {
        cout<<"YES";
        return 0;
    }
    else if(n>4)
    {
        for(int i = 4; i <= n; i++)
        {
            if(n%i == 0)
            {
                if(lucky(i))
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
