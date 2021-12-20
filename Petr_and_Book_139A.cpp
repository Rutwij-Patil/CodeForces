#include <iostream>
#include <numeric>
using namespace std;
int dayofweek(int n, int week[])
{
    int ct = week[0];
    int i{0};
    while(n>ct)
    {
        i++;
        i %= 7;
        ct += week[i];
    }
    return i+1;
}
int main()
{
    int n, week[7], i = 0;
    cin>>n;
    for(;i<7;i++)
    {
        cin>>week[i];
    }
    cout<<dayofweek(n,week)<<endl;
    return 0;
}
