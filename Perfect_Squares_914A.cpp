#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
int maxsquare(vector<int>n, int t)
{
    sort(n.begin(),n.end());
    while(t--)
    {
        if(fmod(sqrt(n[t]),1.0) != 0.0)
           return n[t];
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    vector<int>n(t);
    for(int i = 0; i < t; i++)
        cin>>n[i];
    cout<<maxsquare(n,t);
    return 0;
}
